import json
import math
import random
import re
import itertools
from typing import Dict, Tuple, List
import cgen as c

from dependencies_templates import DependenciesTemplates
from auxillary_functions import get_timestamp
from settings import array_init_options, maths_symbols, first_index, number_of_indexes
from write_to_file import WriteToFile

ArrayData = Tuple[str, Tuple[int]]
NAME = 0
SIZE = 1


class LoopsDependencies:
    def __init__(self, data, output_file):
        self.data = data
        self.result_c_file = output_file

        self.dependencies_templates = DependenciesTemplates(self)
        self.write_to_file = WriteToFile(self)

        self.dependency_function = self.init_dependency_function()

        self.array_init_functions = {1: 'create_one_dim_', 2: 'create_two_dim_',
                                     3: 'create_three_dim_'}
        self.array_dealloc_functions = {1: 'deallocate_1d_array', 2: 'deallocate_2d_array',
                                        3: 'deallocate_3d_array'}

        self.indexed_arrays_source = {}  # todo later it is assumed that this is a set
        self.indexed_arrays_destination = {}  # todo the same -set

        self.maths_symbols = maths_symbols

        self.stmt_counter = 0
        self.amount_of_vars = 0
        self.rand = random.random()
        self.threshold = random.random()

        self.types_to_init = ['int', 'float', 'double']  # todo settings.array_type_options


    def gen_random_numerical_value(self):
        if self.data.type == 'int':
            return random.randint(0,
                                  50)  # todo could be extracted to some settings as well as the else case
        else:
            return round(random.random(), 3)

    def populate_values(self, destination: str, source: str):  # todo rename
        """
        Update dicts of destination and sources array usages.
        """
        self.count_arrays_occurrences_in_statement(self.indexed_arrays_destination, destination)
        self.count_arrays_occurrences_in_statement(self.indexed_arrays_source, source)

    def inc_stmt_counter(self):
        """Increment statement counter by 1 when a new statement is added."""
        self.stmt_counter += 1

    # :)
    def generate_variable_name(self, var_type: str) -> str:
        """
        Generate variable name with the format of 'var_*' where * is a suffix.
        Example:
            in: 'int'
            out: 'int var_a'
        """
        suffix = self.calculate_index(self.amount_of_vars)
        variable_name = var_type + " var_" + suffix
        self.inc_amount_of_vars()
        return variable_name

    def inc_amount_of_vars(self):
        self.amount_of_vars += 1

    # :)
    def get_destination_array(self, unique_arrays: Dict) -> str:
        """
        Receives all available arrays. Arbitrarily chooses one and translates it to array with indexes.
        Example:
            in: {'used': {}, 'unused': {('A', (16, 32, 64))}}
            out: 'A[a][b][c]'
        """
        array_name, array_sizes = self.get_arbitrary_array(unique_arrays)
        number_of_dimensions = len(array_sizes)
        array_with_indexes = self.translate_array_to_array_with_indexed(array_name,
                                                                        number_of_dimensions)
        return array_with_indexes

    # :)
    def translate_array_to_array_with_indexed(self, array_name: str,
                                              number_of_dimensions: int) -> str:
        """
        Translate array name with the number of dimensions to an indexed array for for-loops usage.
        Example:
              in: 'A', 3
              out: 'A[a][b][c]'
        """
        indexes_in_square_brackets = [f'[{self.get_loop_index(dim)}]' for dim in
                                      range(number_of_dimensions)]
        array_with_indexes = array_name + "".join(indexes_in_square_brackets)
        return array_with_indexes

    # :)
    def get_arbitrary_array(self, unique_arrays: Dict) -> ArrayData:
        """
        Get an arbitrary array from all available. Ensure that the unused arrays are used first.
        If if was the first usage of the array, move it to the used arrays set.
        Example:
              in: {'used': {}, 'unused': {('A', (16, 32, 64))}}
              out: ('A', (16, 32, 64))
        """
        sample_size = 1
        if unique_arrays['unused']:
            array = random.sample(unique_arrays['unused'], sample_size)[
                0]  # returns an array with sample_size elements
            unique_arrays['unused'].remove(array)
            unique_arrays['used'].add(array)
        else:
            array = random.sample(unique_arrays['used'], sample_size)[0]
        return array

    # :)
    def get_loop_index(self, loop_level: int) -> str:
        """ Generate a letter as an index for the loop_level with respect to the loop nest depth. """
        loop_level = loop_level % self.data.loop_nest_level
        index = self.calculate_index(loop_level)
        return index

    # :)
    def calculate_index(self, translation: int) -> str:
        """ Return index for the given loop level. """
        index = chr(ord(first_index) + translation % number_of_indexes)
        return index

    def gen_calc_for_read(self, num_of_calculations: int,
                          destination_array: ArrayData) -> str:  # todo rename
        """
        Random right-hand side of a statement is created by merging arrays and operators drew by lot.
        Example:
            in: 4, ('A', (16, 32))
            out: '-B[a][b]*E[a][b][a]+D[a]-7'
        """
        source_data, num_of_calculations = self.generate_source_data(num_of_calculations,
                                                                     destination_array)
        source_data_with_symbols = self.add_symbols(num_of_calculations, source_data)
        return source_data_with_symbols

    # :)
    def add_symbols(self, num_of_calculations: int, source_data: List) -> str:
        """
        Add math's symbols ['+', '-', '*'] to the source_data creating right-hand side of a statement.
        Example:
            in: 4, ['B[a][b]', 'E[a][b][a]', 'D[a], '7']
            out: '-B[a][b]*E[a][b][a]+D[a]-7'
        """
        operators = self.get_maths_symbols(num_of_calculations)
        concatenated = [i + j for i, j in zip(operators, source_data)]
        return "".join(concatenated)

    # :)
    def generate_source_data(self, num_of_calculations: int, destination_array: ArrayData) -> List:
        """
        Based on the number of calculations and the array on which the dependencies are created
        return a list of arrays with indexes and numerical values that will be used in a single statement.
        In the right-hand side of the statement shouldn't be used the array on which the dependencies are created.
        Example:
             in: 3, ('A', (16, 32, 16))
             out: ['B[a][b]', '12', 'C[a]']
        """
        arrays_without_dest_array = {
            'unused': self.data.unique_arrays_read['unused'] - {destination_array},
            'used': self.data.unique_arrays_read['used'] - {destination_array}}

        gen_arr = self.get_k_arrays(num_of_calculations, arrays_without_dest_array)
        self.add_numerical_value(gen_arr)
        num_of_calculations = len(gen_arr)
        return gen_arr, num_of_calculations

    # :)
    def add_numerical_value(self, array: List[str]):
        """
        When the value of a random numb. is smaller that the threshold append numerical value on an arbitrary position.
        Example:
            in: ['B[a][b]', 'C[a]']
            out: ['B[a][b]', '12', 'C[a]']
            """
        if self.rand < self.threshold:
            numerical_value_pos = random.randrange(0, len(array))
            array.append(array[numerical_value_pos])
            array[numerical_value_pos] = str(self.gen_random_numerical_value())

    # :)
    def get_k_arrays(self, k, arrays):
        """ Returns k arrays with indexes (like ['B[a][b]', 'C[a]']) from given set of arrays"""
        return [self.get_destination_array(arrays) for _ in range(k)]

    # :)
    def get_maths_symbols(self, num_of_calculations: int) -> List[str]:
        """

        :param num_of_calculations:
        :return:
        """
        return [random.choice(self.maths_symbols) for _ in range(num_of_calculations)]

    def generate_nested_loops(self, loop_nest_depth: int,
                              affine: List[List[int]]):  # -> List[List[int]]:
        """
        :param loop_nest_depth: integer 2 || 1
        :param affine: [[2, 5], [64, 64]] || [[5], [64]]
        :return:
        """
        """
        :arg loop_nest_depth: the loop nest depth
        recursively function to create for loop with depth d.
        The most inner loop run dependencies.
        Choose upper bound by going through each appropriate size of each array.
        :return for loop with depth d
        """
        loop_index = self.get_loop_index(loop_nest_depth - 1)
        lower_bound = 0
        upper_bound = float("inf")
        for array_name, array_size in self.data.all_arrays.items():
            array_length = len(array_size)
            for index in range(loop_nest_depth - 1, array_length, self.data.loop_nest_level):
                if array_size[index] < upper_bound:
                    upper_bound = array_size[index]

        if loop_nest_depth > 1 and not affine[0][1:]:
            return self.print_loop_structure(loop_index, lower_bound, upper_bound, affine,
                                             self.generate_nested_loops(loop_nest_depth - 1,
                                                                        affine))
        elif loop_nest_depth == 1:
            return self.print_loop_structure(loop_index, lower_bound, upper_bound, affine,
                                             self.translate_dependencies_to_code())
        else:
            return self.print_loop_structure(loop_index, lower_bound, upper_bound, affine,
                                             self.generate_nested_loops(loop_nest_depth - 1,
                                                                        [affine[0][1:],
                                                                         affine[1][1:]]))

    # todo - extract to some other class that will generate cgens
    # todo affine here makes the wrong upper bound for the loops
    def print_loop_structure(self, loop_index: str, lower_bound: int, upper_bound: int,
                             affine: List[List[int]], fun):
        """
        :param loop_index: a -> b -> c (int the first call it is 'a', int the second 'b', ...)
        :param lower_bound: unused
        :param upper_bound: unused
        :param affine: list [[5, 1], [29, 32]] || [[1, 5, 1], [16, 29, 32]]
        :param fun: <class 'cgen.For'> almost whole structure {code} and for loop is added at the beginning
        :return: <class 'cgen.For'>
        """
        """
        Print loop structure: for(int {} = {}; {} < {}; {}++){ <fun> }
        """

        return c.For('int {} = {}'.format(loop_index, affine[0][0]),
                     '{} < '.format(loop_index)
                     + str(affine[1][0]),
                     '{}++'.format(loop_index),
                     fun)

    def init_dyn_arrays(self):
        """Init all arrays"""
        file = self.result_c_file
        for array_name, array_size in self.data.all_arrays.items():
            self.write_to_file.write_init_dyn_array(array_name, array_size, file, self.data.type,
                                                    self.data.init_with)

    def init_static_arrays(self):  # todo unused function
        file = self.result_c_file
        """Init all arrays"""
        for array_name, array_size in self.data.all_arrays.items():
            self.write_to_file.write_init_static_array(array_name, array_size, file,
                                                       self.data.type)

    def dealloc_arrays(self):
        file = self.result_c_file
        for array_name, array_size in self.data.all_arrays.items():
            self.write_to_file.write_dealloc_array(array_name, array_size, file)

    # todo parse dependencies
    def get_depedency_data(self, array):
        pass

    def translate_dependencies_to_code(self):
        DESTINATION, SOURCE = 0, 1
        block_with_statements = []
        for dependency_name, dependency_data in self.data.dependencies.items():
            for data in dependency_data:
                array_name = data['array_name']
                distances = data['distance']
                optimize = data['optimize']
                mix_in = data['mix_in']

                dest_array, src_array = array_name, array_name

                for index, distance in enumerate(distances):
                    dest_dist = self.get_sign(distance[DESTINATION])
                    src_dist = self.get_sign(distance[SOURCE])

                    src_array += self.get_array(index, src_dist)
                    dest_array += self.get_array(index, dest_dist)

                stmt = self.dependency_function[dependency_name](dest_array, src_array, optimize,
                                                                 mix_in)
                if stmt:
                    block_with_statements.append(c.Statement('\n' + self.add_indent() + stmt))
                res = c.Block(block_with_statements)

        return res

    def gen_c_block_with_statements(self, block_with_statements):
        return c.Block(block_with_statements)

    def get_array(self, index, dist):
        return f'[{self.get_loop_index(index % self.data.loop_nest_level)}{dist}]'

    # :)
    def get_sign(self, distance: int) -> str:  # todo rename distance
        """ Based on the distance sign return a subscript suffix.
        If the distance is: 0 then there is no suffix needed,
                            negative then it just needs to be converted to a string,
                            positive then return the string of distance preceded with the plus sign.
        """
        distance_as_str = str(distance)
        if distance_as_str == '0':
            subscript_suffix = ''
        elif distance_as_str[0] == '-':
            subscript_suffix = distance_as_str
        else:
            subscript_suffix = '+' + str(distance)
        return subscript_suffix

    def adjust_bounds(self, affine_fcts: List):  # todo definitely to refactor
        """
        affine_fcts [['C', ((0, -4),)], ['B', ((0, 4), (0, 2), (0, 2))]] <class 'list'> List[List[str, Tuple[Tuple[int]]]]
        res [0, 4] [14, 60]
        """
        """
        Calculate loop bounds (lower and upper) for for-loops.
        """
        # print("affine_fcts ", affine_fcts)
        # print("all_arrays", self.data.all_arrays)

        max_number_of_dims = 0
        for array in self.data.all_arrays.values():
            # print("array ", array)
            max_number_of_dims = max(max_number_of_dims, len(array))

        the_smallest_dims = [math.inf] * max_number_of_dims

        for array in self.data.all_arrays.values():
            for i, el in enumerate(array):
                the_smallest_dims[i] = min(the_smallest_dims[i], el)

        # print("the_smallest_dims ", the_smallest_dims)

        print("self.data.loop_nest_level ", self.data.loop_nest_level, "  len(the_smallest_dims) ", len(the_smallest_dims))
        k = min(self.data.loop_nest_level, len(the_smallest_dims))
        # print("loop nest level ", k)
        # print("problem ", [the_smallest_dims[i::k] for i in range(k) if the_smallest_dims[i::k] != [] ])
        the_smallest_dims_with_respect_to_loop_nest = [min(the_smallest_dims[i::k]) for i in
                                                       range(k) if the_smallest_dims[i::k] != []]
        # to jest chyba niepotrzebne
        # print("the_smallest_dims_with_respect_to_loop_nest", the_smallest_dims_with_respect_to_loop_nest)

        out = []  # todo create empty empty_lists = [ [] for _ in range(n) ]
        for tupl in affine_fcts:
            tmp = list(tupl[1])
            tuple = [tmp[i::k] for i in range(k)]
            for i, arr in enumerate(tuple):
                tuple[i] = list(itertools.chain(*arr))
            out.append(tuple)

        res = [[] for _ in range(k)]

        for arr in out:
            for i in range(k):
                res[i] += arr[i]
        # print("RES ", res)

        bounds = {'lower': [], "upper": []}
        for i, arr in enumerate(res):
            min_val = min(arr)
            max_val = max(arr)
            bounds["lower"].append(max(0, -min_val))  # ok
            bounds["upper"].append(the_smallest_dims_with_respect_to_loop_nest[i] - max_val)

        # print("bounds", bounds)

        if self.data.loop_nest_level > len(the_smallest_dims):
            for i in range(self.data.loop_nest_level - len(the_smallest_dims)):
                bounds["lower"].append(0)
                bounds["upper"].append(16 * (i + 1))

        return [bounds['lower'][::-1], bounds['upper'][::-1]]

    def global_bounds(self):
        """
        todo concat_depen ret [['D', ((0, 3),)], ['D', ((0, 3),)], ['C', ((0, 1), (0, 1))], ['A', ((0, 0), (0, -2))]] <class 'list'>
        :return:
        """
        concat_depen = []
        # print("self.data.dependencies.items() ", self.data.dependencies.items())
        for dependency_name, arrays in self.data.dependencies.items():
            if arrays:
                for array in arrays:
                    concat_depen.append([array['array_name'], array['distance']])
        # print("concat_depen", concat_depen)
        return concat_depen

    # :]
    def count_arrays_occurrences_in_statement(self, indexed_arrays: Dict,
                                              expression: str):  # todo rename and change descr
        """
        Assign to each 'array_name[idx_1][idx_2]...[idx_k]' its first usage line and increment the occurences counter.
        """
        expression = "".join(expression.split())  # remove all whitespaces
        arrays_with_indexes = self.get_arrays_from_expression(expression)
        for arr in arrays_with_indexes:
            if arr not in indexed_arrays.keys():
                indexed_arrays[arr] = {'first_usage_line': self.stmt_counter,
                                       # todo this is not incremented alway when should be
                                       'occurrences_count': 0}
            indexed_arrays[arr]['occurrences_count'] += 1

    # :)
    def get_arrays_from_expression(self, expression: str) -> List[str]:
        """
        Given the right-hand side of a statement extract all arrays with indexes that were used.
        The regex finds anything of form: array_name[idx_1][idx_2]...[idx_k].
        Example:
            in: 'C[a]+38-B[a][b][c]*2'
            out: ['C[a]', 'B[a][b][c]']
        """
        regex = r'(\w+(\[.*?\])+)'
        matched_elements = re.findall(regex, expression)
        arrays_with_indexes = [el[0] for el in
                               matched_elements]  # eliminate the results of subgroup (\[.*?\])
        return arrays_with_indexes

    # todo to different file
    def add_indent(self):
        indent_size = 3
        return " " * (self.data.loop_nest_level + indent_size)

    def create_nested_loop(self, output_file):  # todo refactor
        string_to_write = str(
            self.generate_nested_loops(self.data.loop_nest_level,
                                       self.adjust_bounds(self.global_bounds()))).splitlines()
        self.write_to_file.create_nested_loop_1(string_to_write)

    def init_dependency_function(self):
        dependency_function = {
            'FLOW': (lambda dest, source, optimize, mix_in:
                     self.dependencies_templates.flow_dependency(dest, source, optimize, mix_in)),
            'ANTI': (lambda dest, source, optimize, mix_in:
                     self.dependencies_templates.anti_dependency(dest, source, optimize, mix_in)),
            'OUTPUT': (lambda dest, source, optimize, mix_in:
                       self.dependencies_templates.output_dependency(dest, source, optimize,
                                                                     mix_in)),
            'INPUT': (lambda dest, source, optimize, mix_in:
                      self.dependencies_templates.input_dependency(dest, source, optimize, mix_in))}
        return dependency_function
