import json
import math
import random
import re
from typing import Dict, Tuple, List
import cgen as c

from dependencies_templates import DependenciesTemplates
from parse_input import ParseInput
from auxillary_functions import get_timestamp


class LoopsDependencies:
    def __init__(self, filename):
        self.data = {'raw': '',
                     'parsed': '',
                     'calculated': '',
                     'auxiliary': ''}


        self.dependencies_templates = DependenciesTemplates(self)
        self.write_to_file = WriteToFile(self)
        self.result_c_file = self.create_file_name()
        self.input_file = filename
        self.dependency_function = {
            'FLOW': (lambda dest, source, optimize, mix_in: self.dependencies_templates.flow_dependency(dest, source, optimize, mix_in)),
            'ANTI': (lambda dest, source, optimize, mix_in: self.dependencies_templates.anti_dependency(dest, source, optimize, mix_in)),
            'OUTPUT': (
                lambda dest, source, optimize, mix_in: self.dependencies_templates.output_dependency(dest, source, optimize, mix_in)),
            'INPUT': (
                lambda dest, source, optimize, mix_in: self.dependencies_templates.input_dependency(dest, source, optimize, mix_in))}

        self.unique_arrays_write = {"used": set(), "unused": set()}
        self.unique_arrays_read = {"used": set(), "unused": set()}
        self.array_init_functions = {1: 'create_one_dim_', 2: 'create_two_dim_', 3: 'create_three_dim_'}
        self.array_dealloc_functions = {1: 'deallocate_1d_array', 2: 'deallocate_2d_array', 3: 'deallocate_3d_array'}

        """
        Dicts used to keep control of arrays used in statements. 
        Needed to optimize (reduce) the number of statements.
        KEYS: string, used arrays with their access functions
        VALUES: int, represents number of line of code (within statements) 
        in which this array access function was used for the first time.
        <destination> = <source>
        """

        self.literal_values_source = {}  # todo later it is assumed that this is a set
        self.literal_values_destination = {}  # todo the same -set

        self.stmt_counter = 0

        self.maths_operations = ['+', '-', '*']
        self.amount_of_vars = 0
        self.types_to_init = ['int', 'float', 'double']
        self.init_with = ['ones', 'zeros', 'random']

        self.loop_nest_level, self.type_to_init, self.init_with, self.unparsed_arrays_write, \
        self.unparsed_arrays_read, self.array_sizes_vars, self.distances_vars, self.all_arrays, \
        self.dependencies, self.rand_num_of_calculations = self.parse_input()


    def parse_input(self):
        """
        Parse input, init global variables, call validate sizes for arrays. Put all arrays to 'unused'.
        """
        filename = self.input_file
        data = self.read_file_data(filename)

        loop_nest_level = ParseInput.validate_loop_nest_level(data['loop_nest_level'])
        type_to_init = ParseInput.validate_type(data['type'], self.types_to_init)
        init_with = ParseInput.validate_init_value(data['init_with'], self.init_with)
        unparsed_arrays_write = data['unique_arrays_write']
        unparsed_arrays_read = data['unique_arrays_read']
        array_sizes_vars = data['array_sizes']
        distances_vars = data['distances']

        self.unique_arrays_write['unused'] = set(self.parse_to_array(unparsed_arrays_write, array_sizes_vars))

        self.unique_arrays_read['unused'] = set(self.parse_to_array(unparsed_arrays_read, array_sizes_vars))

        all_arrays = ParseInput.validate_array_sizes(self.unique_arrays_write, self.unique_arrays_read)
        dependencies = ParseInput.parse_dependencies(data['dependencies'], all_arrays, distances_vars)
        rand_num_of_calculations = self.calculate_num_of_calculations(self.unique_arrays_read["unused"])

        return loop_nest_level, type_to_init, init_with, unparsed_arrays_write, unparsed_arrays_read, array_sizes_vars, \
               distances_vars, all_arrays, dependencies, rand_num_of_calculations

    def populate_unique_arrays(self):
        self.unique_arrays_write['unused'] = set(self.parse_to_array(self.unparsed_arrays_write, self.array_sizes_vars))
        self.unique_arrays_read['unused'] = set(self.parse_to_array(self.unparsed_arrays_read, self.array_sizes_vars))

    def calculate_num_of_calculations(self, array): #self.unique_arrays_read["unused"]
        return [i + 1 for i in range(len(array) - 1)]

    def parse_to_array(self, array, array_sizes_vars):
        return [ParseInput.parse_string_array(arr, array_sizes_vars) for arr in array]

    def read_input(self, data):
        raw_input = {
            'loop_nest_level': data['loop_nest_level'],
            'type_to_init': data['type'],
            'init_with': data['init_with'],
            'arrays_write': data['unique_arrays_write'],
            'arrays_read': data['unique_arrays_read'],
            'array_sizes_vars': data['array_sizes'],
            'distances_vars': data['distances'],
            'dependencies': data['dependencies']
        }
        return raw_input

    # def parse_input(self, input):
    #     input = {
    #         'loop_nest_level': ParseInput.validate_loop_nest_level(input['loop_nest_level']),
    #         'type_to_init': ParseInput.validate_type(input['type'], self.types_to_init),
    #         'init_with': ParseInput.validate_init_value(input['init_with'], self.init_with),
    #         'arrays_write': data['unique_arrays_write'],
    #         'arrays_read': data['unique_arrays_read'],
    #         'array_sizes_vars': data['array_sizes'],
    #         'distances_vars': input['distances'], #todo also check
    #         'dependencies': ParseInput.parse_dependencies(input['dependencies']),
    #         'all_arrays': ParseInput.validate_array_sizes(self.unique_arrays_write, self.unique_arrays_read)
    #         'rand_num_of_calculations': []
    #     }
    #     return input


    def read_file_data(self, filename): #todo extract to file handling class
        with open(filename, 'r') as file:
            data = json.load(file)[0]
            return data


    def create_file_name(self):
        extension = '.c'
        file_name = 'src/kern' + '_' + get_timestamp() + extension
        return file_name

    def gen_random_scalar(self):
        if self.type_to_init == 'int':
            return random.randint(0, 50)  # todo could be extracted to some settings as well as the else case
        else:
            return round(random.random(), 3)

    def populate_values(self, destination: str, source: str):  # todo rename
        """
        Update dicts of destination and sources array usages.
        """
        self.populate_literal_values(self.literal_values_destination, destination)
        self.populate_literal_values(self.literal_values_source, source)

    def inc_stmt_counter(self):
        """Increment statement counter by 1 when a new statement is added."""
        self.stmt_counter += 1

    def generate_var(self, var_type: str) -> str:  # what it does is that it generates sth like "int var_b"
        """ Generate names for variables to store data when "init_with" in input file is set to "num_val"
        so as not to generate any new dependencies.
        """
        first_iterator = 'a'
        calculated_iterator = chr(ord(first_iterator) + self.amount_of_vars % 26)
        random_var = var_type + " var_" + calculated_iterator
        self.inc_amount_of_vars()
        return random_var

    def inc_amount_of_vars(self):
        self.amount_of_vars += 1

    def gen_random_stmt(self, unique_arrays: Dict) -> str:
        # input {'used': {('B', (16, 32, 32))}, 'unused': {('A', (64, 32, 64)), ('C', (256, 128))}}
        # ouput: A[a][a][a], B[a][a][a], A[a][b][c]
        """
        If there are any unused arrays, get one, other way choose randomly from used.
        Add indexes to array (less than loops nest depth).
        """
        if unique_arrays['unused']:
            el = random.sample(unique_arrays['unused'], 1)[0]
            unique_arrays['unused'].remove(el)
            unique_arrays['used'].add(el)
        else:
            el = random.sample(unique_arrays['used'], 1)[0]
        curr = el[0]
        for size in range(len(el[1])):
            curr += f'[{self.generate_loop_index(size % self.loop_nest_level)}]'
        return curr

    def generate_loop_index(self, loop_level: int) -> str:  # it returns just a letter
        first_iterator = 'a'
        calculated_iterator = chr(ord(first_iterator) + loop_level % 26)
        return calculated_iterator



    def gen_calc_for_read(self, num_of_calculations: int, arr_def: Tuple[str, Tuple[int]]) -> str:
        # in_1: just a number (like 1)
        # in_2: tuple ('B', (32, 64, 64)) || ('A', (16, 32, 16))
        # out: +A[a][b][a] || -B[a][b][a] || +34
        """
        Random right-hand side of a statement is created by merging
        arrays and operators drew by lot.
        """
        stmt = ""
        arrays = self.generate_arrays_with_indexes1(num_of_calculations, arr_def)
        operators = self.generate_operators(num_of_calculations)
        for i in range(num_of_calculations):
            stmt += operators[i]
            stmt += str(arrays[i])
        return stmt

    def generate_arrays_with_indexes1(self, num_of_calculations: int, arr_def: Tuple[
        str, Tuple[int]]) -> List:  # todo rename to generate_arrays_with_indexes
        # in_1: just a number (like 1 || 2)
        # in_2: tuple ('B', (32, 64, 64)) || ('A', (16, 32, 16))
        # out: [12, 'B[a][b]', 'A[a][b][c]'] || ['A[a][b][c]', 'B[a][b]'] || [0, 'C[a][b]']
        """
        Generate a right-hand side of a statement.
        Favor to use unused arrays from "unique_arrays_read".
        :return: an array of array names
        """
        # temporarily remove the array on which we create dependencies so as not to use it again in the same stmt
        tmp_used, tmp_unused = False, False
        if arr_def in self.unique_arrays_read['unused']:
            tmp_unused = True
            self.unique_arrays_read['unused'].remove(arr_def)
        if arr_def in self.unique_arrays_read['used']:
            tmp_used = True
            self.unique_arrays_read['used'].remove(arr_def)

        gen_arr = self.generate_arrays_helper1([], num_of_calculations, arr_def)

        if tmp_unused:
            self.unique_arrays_read['unused'].add(arr_def)
        if tmp_used:
            self.unique_arrays_read['used'].add(arr_def)

        # reduce number of numerical values by adding them only with 24% of probability
        global coin_flip
        coin_flip = random.random()
        if coin_flip > 0.75:  # todo clean code extract to another function
            scalar_position_in_arr = random.randrange(0, len(gen_arr))
            gen_arr.append(gen_arr[scalar_position_in_arr])
            gen_arr[scalar_position_in_arr] = ('', self.gen_random_scalar())
        res = []
        for el in gen_arr:
            curr = el[0]
            if type(el[1]) is tuple:
                for size in range(len(el[1])):
                    curr += f'[{self.generate_loop_index(size % self.loop_nest_level)}]'
            else:
                curr = el[1]
            res.append(curr)
        return res

    def generate_arrays_helper1(self, arrays_drew_by_lot: List[Tuple[str, Tuple[int]]], num_of_calculations: int,
                                arr_def: Tuple[str, Tuple[int]]) -> List[Tuple[str, Tuple[int]]]:
        """
        :param arrays_drew_by_lot: [] || [('C', (32, 64, 32)), ('A', (128, 256))] #todo the type can be wrong for []
        :param num_of_calculations: just an integer 1 || 2
        :param arr_def: ('B', (131072,))
        :return: [('A', (128, 256)), ('C', (32, 64, 32))]
        """
        """
        Draw arrays by lot from the unique_arrays_read so as to use them as a right-hand side of a stmt.
        :return: arrays of array names drew by lot
        """
        if num_of_calculations > 0:
            unused_arr_size = len(self.unique_arrays_read['unused'])
            if unused_arr_size > 0:
                random_sample = random.sample(self.unique_arrays_read['unused'],
                                              min(num_of_calculations, unused_arr_size))
                for el in random_sample:
                    self.unique_arrays_read['unused'].remove(el)
                    self.unique_arrays_read['used'].add(el)
            else:
                random_sample = random.sample(self.unique_arrays_read['used'],
                                              min(num_of_calculations, len(self.unique_arrays_read['used'])))
            num_of_calculations -= len(random_sample)
            arrays_drew_by_lot += random_sample
            self.generate_arrays_helper1(arrays_drew_by_lot, num_of_calculations, arr_def)
        return arrays_drew_by_lot

    def generate_operators(self, num_of_calculations: int) -> List[str]:
        """
        :param num_of_calculations: just an integer 1 || 2
        :return: list ['+'] || ['+', '*']
        """
        """
        :return: an array of mathematical operators from {+, -, *, /} drew by lot
        """
        global maths_operations_size
        maths_operations_size = len(self.maths_operations)
        if coin_flip > 0.75:  # if there is a scalar added increase the number of operators
            num_of_calculations += 1
        return self.generate_operators_helper([], num_of_calculations)

    def generate_operators_helper(self, maths_oper_drew_by_lot: List[str], num_of_calculations: int) -> List[str]:
        """
        :param maths_oper_drew_by_lot: list ['*', '-'], ['+']
        :param num_of_calculations: int 0 || 1
        :return: ['*', '+']
        """
        """
        Use recursion to generate expected amount of maths_operations.
        """
        if num_of_calculations > 0:
            tmp = random.sample(self.maths_operations, min(num_of_calculations, len(self.maths_operations)))
            maths_oper_drew_by_lot += tmp
            num_of_calculations -= len(tmp)
            self.generate_operators_helper(maths_oper_drew_by_lot, num_of_calculations)
        return maths_oper_drew_by_lot



    def generate_nested_loops(self, loop_nest_depth: int, affine: List[List[int]]):  # -> List[List[int]]:
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
        loop_index = self.generate_loop_index(loop_nest_depth - 1)
        lower_bound = 0
        upper_bound = float("inf")
        for array_name, array_size in self.all_arrays.items():
            array_length = len(array_size)
            for index in range(loop_nest_depth - 1, array_length, self.loop_nest_level):
                if array_size[index] < upper_bound:
                    upper_bound = array_size[index]

        if loop_nest_depth > 1 and not affine[0][1:]:
            return self.print_loop_structure(loop_index, lower_bound, upper_bound, affine,
                                             self.generate_nested_loops(loop_nest_depth - 1, affine))
        elif loop_nest_depth == 1:
            return self.print_loop_structure(loop_index, lower_bound, upper_bound, affine, self.run_dependencies())
        else:
            return self.print_loop_structure(loop_index, lower_bound, upper_bound, affine,
                                             self.generate_nested_loops(loop_nest_depth - 1,
                                                                        [affine[0][1:], affine[1][1:]]))

    def print_loop_structure(self, loop_index: str, lower_bound: int, upper_bound: int, affine: List[List[int]], fun):
        """
        :param loop_index: a -> b -> c (int the first call it is 'a', int the second 'b', ...)
        :param lower_bound: unused
        :param upper_bound: unused
        :param affine: list [[5, 1], [29, 32]] || [[1, 5, 1], [16, 29, 32]] [[1, 5, 1], [16, 29, 32]]
        :param fun: <class 'cgen.For'> almost whole structure {code} and for loop is added at the beginning
        :return: <class 'cgen.For'>
        """
        """
        Print loop structure: for(int {} = {}; {} < {}; {}++){ ... }
        """
        gen_scalar_part = ''
        curr_val = affine[1][0]
        if curr_val > 0:
            gen_scalar_part = ' - '
        elif curr_val < 0:
            gen_scalar_part = ' + '
        gen_scalar_part += str(abs(curr_val))

        return c.For('int {} = {}'.format(loop_index, affine[0][0]),
                     '{} < '.format(loop_index)
                     # + str(upper_bound)
                     + str(affine[1][0]),
                     '{}++'.format(loop_index),
                     fun)



    def init_dyn_arrays(self):
        """Init all arrays"""
        file = self.result_c_file
        for array_name, array_size in self.all_arrays.items():
            self.write_to_file.write_init_dyn_array(array_name, array_size, file, self.type_to_init, self.init_with)



    def init_static_arrays(self):  # todo unused function
        file = self.result_c_file
        """Init all arrays"""
        for array_name, array_size in self.all_arrays.items():
            self.write_to_file.write_init_static_array(array_name, array_size, file, self.type_to_init)



    def dealloc_arrays(self):
        file = self.result_c_file
        for array_name, array_size in self.all_arrays.items():
            self.write_to_file.write_dealloc_array(array_name, array_size, file)



    def run_dependencies(self):  # todo split this function into subfunctions
        """
        {

         C[a][b]=C[a-2][b-4]-14;

         A[a][b]=A[a+5][b+2]+B[a][b]-D[a][b]*C[a][b]+E[a];

         A[a][b]=B[a][b]*E[a];

         int var_a=E[a]*2;
         int var_b=E[a+4]+43;
        }
        :return:
        """
        """Go throw all dependencies, find indexes for each dependency and put each
         created dependency into c.Statement
        :return c.Block containing all statements
        """
        block_with_statements = []
        for dependency_name, arrays in self.dependencies.items():
            if arrays:
                for array in arrays:
                    array_name = array['array_name']
                    distances = array['distance']
                    optimize = array['optimize']
                    mix_in = array['mix_in']
                    if not mix_in == 'random' and not mix_in == 'num_val':
                        raise KeyError("Mix_in can be only 'random' or 'num_val'")

                    for arr_name, arr_size in self.all_arrays.items():
                        if array_name == arr_name:
                            dest_array = array_name
                            src_array = [array_name for _ in range(len(distances[0]) - 1)]
                            for index in range(len(arr_size)):
                                distance = distances[index]
                                if distance[0] == 0:
                                    dest_dist = ''
                                elif str(distance[0])[0] == '-':
                                    dest_dist = str(distance[0])
                                else:
                                    dest_dist = '+' + str(distance[0])
                                for i in range(1, len(distances[0])):
                                    if distance[i] == 0:
                                        src_dist = ''
                                    elif str(distance[i])[0] == '-':
                                        src_dist = str(distance[i])
                                    else:
                                        src_dist = '+' + str(distance[i])
                                    src_array[i - 1] += f'[{self.generate_loop_index(index % self.loop_nest_level)}{src_dist}]'
                                dest_array += f'[{self.generate_loop_index(index % self.loop_nest_level)}{dest_dist}]'
                                src_array_str = ''
                                for src in src_array:
                                    src_array_str += src + random.choice(self.maths_operations)
                            stmt = self.dependency_function[dependency_name](dest_array, src_array_str[:-1], optimize,
                                                                             mix_in)
                            if stmt:
                                block_with_statements.append(c.Statement('\n' + self.add_indent() + stmt))
        res = c.Block(block_with_statements)
        return res



    def adjust_bounds(self, affine_fcts: List):
        """
        affine_fcts [['C', ((0, -4),)], ['B', ((0, 4), (0, 2), (0, 2))]] <class 'list'> List[List[str, Tuple[Tuple[int]]]]
        res [0, 4] [14, 60]
        """
        """
        Calculate loop bounds (lower and upper) for for-loops.
        """
        max_tuple_size = 0
        for tupl in affine_fcts:
            max_tuple_size = max(max_tuple_size, len(tupl[1]))

        max_tuple_size = min(max_tuple_size,
                             self.loop_nest_level)  # in case of arrays with bigger dimensions than the loop nest size

        lower_bounds = [-math.inf] * max_tuple_size
        upper_bounds = [math.inf] * max_tuple_size

        for tupl in affine_fcts:
            index = 0
            for t in tupl[1]:
                index = index % self.loop_nest_level
                lower_bounds[index] = max(lower_bounds[index], -1 * int(t[0]))
                lower_bounds[index] = max(lower_bounds[index], -1 * int(t[1]))
                upper_bounds[index] = min(upper_bounds[index], self.all_arrays[tupl[0]][index] - int(t[0]))
                upper_bounds[index] = min(upper_bounds[index], self.all_arrays[tupl[0]][index] - int(t[1]))

                lower_bounds[index] = max(lower_bounds[index],
                                          0)  # 0 because of "random" part which is always without a translation
                upper_bounds[index] = min(upper_bounds[index],
                                          self.all_arrays[tupl[0]][index])  # don't exceed the size of an array
                index += 1

        return [lower_bounds[::-1], upper_bounds[::-1]]

    def global_bounds(self):
        """
        todo concat_depen ret [['D', ((0, 3),)], ['D', ((0, 3),)], ['C', ((0, 1), (0, 1))], ['A', ((0, 0), (0, -2))]] <class 'list'>
        :return:
        """
        global concat_depen  # todo rename - is global needed when there is return?!
        concat_depen = []
        for dependency_name, arrays in self.dependencies.items():
            if arrays:
                for array in arrays:
                    concat_depen.append([array['array_name'], array['distance']])
        return concat_depen

    def populate_literal_values(self, literal_values_set: Dict, data: str):
        """
        :param literal_values_set: Dict {'D[a+5]': [1, 0], 'E[a]': [1, 0], 'C[a][b]': [1, 0]}
        :param data: D[a+2]+A[a][b]  || C[a][b]+23  ||C[a+5][b+1]*11  str
        :return:
        """
        """
        Assign to each array[index] its first usage line.
        """
        data = "".join(data.split())  # remove all whitespaces
        expresion_as_string = self.get_arrays_from_string(data)
        for res in expresion_as_string:
            if res not in literal_values_set.keys():
                literal_values_set[res] = [0, self.stmt_counter]
            literal_values_set[res][0] += 1

    def get_arrays_from_string(self, string_with_arrays: str):
        """
        :param string_with_arrays: C[a][a][a] || C[a]+38-B[a][b][c]
        :return: ['C[a][a][a]'] || ['C[a]', 'B[a][b][c]']
        """
        """
        Extract and return the list of arrays with name and its indexes
        """
        string_with_arrays = re.findall(r'(\w+(\[.*?\])+)', string_with_arrays)
        # print("concat_depen", concat_depen, type(concat_depen))
        res = [i[0] for i in string_with_arrays]
        return res

    def add_indent(self):
        return " " * (self.loop_nest_level + 3)

    def create_nested_loop(self): #todo refactor
        string_to_write = str(self.generate_nested_loops(self.loop_nest_level, self.adjust_bounds(self.global_bounds()))).splitlines()
        self.write_to_file.create_nested_loop_1(string_to_write)

###***************************************************
###***************************************************


class WriteToFile:
    #todo this functions should not need to know loops_dependencies, it's just a string to write!!!
    def __init__(self, loops_dependencies):
        self.ld = loops_dependencies

    def create_nested_loop_1(self, string_to_write):
        """
        ['for (int d = 3; d < 64; d++)', '  for (int c = 4; c < 16; c++)', '    for (int b = 5; b < 16; b++)', '      for (int a = 5; a < 16; a++)', '      {', '        ', '       C[a][b][c]=C[a-5][b-4][c-3]-A[a][b];', '        ', '       B[a][b]=B[a][b+2]*50;', '        ', '       A[a][b]=A[a+5][b+2]-B[a][b];', '        ', '       A[a][b]=B[a][b];', '        ', '       B[a][b]=31;', '      }']
        if printed element by element
        for (int d = 3; d < 64; d++)
        for (int c = 4; c < 16; c++)
        for (int b = 5; b < 16; b++)
          for (int a = 5; a < 16; a++)
          {

           C[a][b][c]=C[a-5][b-4][c-3]-A[a][b];

           B[a][b]=B[a][b+2]*50;

           A[a][b]=A[a+5][b+2]-B[a][b];

           A[a][b]=B[a][b];

           B[a][b]=31;
          }
        :return:
        """
        """
        Calls generate_nested_loops(d, i) and write it to file
        """
        with open(self.ld.result_c_file, 'a+') as file:
            file.write('\n\n')
            for line in string_to_write:  # todo: rewrite
                file.write('\t{}\n'.format(line))

    def write_init_dyn_array(self, array_name: str, array_sizes: Tuple[int], file, typ='float', init_with='random'):
        """
                int ***A = create_three_dim_int(16, 64, 64, "zeros");

        :param array_name: str C || A
        :param array_sizes: Tuple[int] (524288,) || (16, 64, 64)
        :param file:
        :param typ:
        :param init_with:
        :return:
        """
        """Write declaration and calling functions to init arrays to file"""
        if type(array_sizes) == tuple and len(array_sizes) == 1:  # todo why is there a difference in [1:-2] [1:-1]
            init_array = c.Statement('\n\t{} {}{} = {}{}({}, "{}")'.format(typ, '*' * len(array_sizes), array_name,
                                                                           self.ld.array_init_functions[len(array_sizes)],
                                                                           typ,
                                                                           str(array_sizes)[1:-2], init_with))
        else:
            init_array = c.Statement('\n\t{} {}{} = {}{}({}, "{}")'.format(typ, '*' * len(array_sizes), array_name,
                                                                           self.ld.array_init_functions[len(array_sizes)],
                                                                           typ,
                                                                           str(array_sizes)[1:-1], init_with))
        with open(file, 'a+') as file:
            file.write(str(init_array))

    def write_init_static_array(self, array_name, array_sizes, file, typ='int'):  # todo never invoked
        print("array_name", array_name, type(array_name))
        print("array_sizes", array_sizes, type(array_sizes))

        number_of_dimensions = len(array_sizes)
        if number_of_dimensions == 1:
            init_array = c.Statement('\n\t {} {}[{}] = {{0}}'.format(typ, array_name, *array_sizes))
        elif number_of_dimensions == 2:
            init_array = c.Statement('\n\t {} {}[{}][{}] = {{0}}'.format(typ, array_name, *array_sizes))
        else:
            init_array = c.Statement(
                '\n\t {} {}[{}][{}][{}] = {{0}}'.format(typ, array_name, *array_sizes))
        print("init_array", str(init_array))

        with open(file, 'a+') as file:
            file.write(str(init_array))

    def write_dealloc_array(self, array_name, array_sizes, file):
        number_of_dimensions = len(array_sizes)
        if number_of_dimensions == 1:
            dealloc_array = c.Statement(
                '\n\t{}({})'.format(self.ld.array_dealloc_functions[number_of_dimensions], array_name))
        else:
            dealloc_array = c.Statement(
                '\n\t{}({}, {})'.format(self.ld.array_dealloc_functions[number_of_dimensions], array_name,
                                        str(array_sizes)[1:-1]))
        with open(file, 'a+') as file:
            file.write(str(dealloc_array))

