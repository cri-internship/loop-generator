from typing import Tuple
import random

from parse_input import DataClass


class DependenciesTemplates:
    def __init__(self, loops_dependencies):
        self.ld = loops_dependencies

    def flow_dependency(self, dest_array_name: str, source_array_name: str, optimize: bool, mix_in: str) -> str:
        """
        :param dest_array_name: A[a][a][a]
        :param source_array_name: A[a-4][a-1][a-5]
        :param optimize: True
        :param mix_in: random
        :return: 'A[a][a][a]=A[a-4][a-1][a-5]+B[a][a][a] '
        """
        arr_name = dest_array_name.partition('[')[0]
        arr_def = (arr_name, self.ld.data.all_arrays[arr_name])
        if mix_in == 'random':
            result = self.gen_random_part(dest_array_name, source_array_name, optimize, arr_def)
        else:
            result = self.gen_scalar_part(dest_array_name, source_array_name, optimize)
        return result

    def gen_random_part(self, dest_array_name: str, source_array_name: str, optimize: bool,
                        arr_def: Tuple[str, Tuple[int]]) -> str:
        """

        :param self:
        :param dest_array_name: 'A[a][a][a]'
        :param source_array_name: 'A[a-4][a-1][a-5]'
        :param optimize: True
        :param arr_def: ('A', (32, 64, 32))
        :return: A[a][a][a]=A[a-4][a-1][a-5]*12
        """
        stmt_body = {}
        if optimize:
            stmt_body['destination'] = [dest_array_name]
            stmt_body['source'] = [
                f'{source_array_name}{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)}']
            if dest_array_name in self.ld.indexed_arrays_destination.keys() and source_array_name in self.ld.indexed_arrays_source.keys():
                result = ""
            else:
                result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
                self.ld.populate_values(dest_array_name, source_array_name)
        else:
            stmt_body['destination'] = [dest_array_name,
                                        f'{self.ld.get_destination_array(self.ld.data.unique_arrays_write)}'] #gen_random_stmt
            stmt_body['source'] = [
                f'{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)[1:]}',
                f'{source_array_name}{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)}']
            result = self.gen_based_on_usage_flow(stmt_body)
        return result

    def gen_scalar_part(self, dest_array_name: str, source_array_name: str, optimize: bool) -> str:
        """
        :param dest_array_name: 'A[a][a][a]'
        :param source_array_name: 'A[a-5][a-4][a-1]'
        :param optimize: 'True'
        :return: 'A[a][a][a]=A[a-5][a-4][a-1]-25'
        """
        # print("gen_scalar_part")
        # print("dest_array_name", dest_array_name, type(dest_array_name))
        # print("source_array_name", source_array_name, type(source_array_name))
        # print("optimize", optimize, type(optimize))
        # print("dest_array_name", dest_array_name, type(dest_array_name))
        stmt_body = {}
        if optimize:
            stmt_body['destination'] = [dest_array_name]
            stmt_body['source'] = [
                f'{source_array_name}{random.choice(self.ld.maths_symbols)}{self.ld.gen_random_numerical_value()}']
            # result = gen_one_line_flow(stmt_body)
            if dest_array_name in self.ld.indexed_arrays_destination.keys() and source_array_name in self.ld.indexed_arrays_source.keys():
                result = ""
            else:
                result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
                self.ld.populate_values(dest_array_name, source_array_name)
        else:
            stmt_body['destination'] = [dest_array_name, f'{self.ld.generate_variable_name("float ")}']
            stmt_body['source'] = [f'{self.ld.gen_random_numerical_value()}',
                                   f'{source_array_name}{random.choice(self.ld.maths_symbols)}{self.ld.gen_random_numerical_value()}']
            result = self.gen_based_on_usage_flow(stmt_body)
        # print("result", result, type(result))
        return result

    def gen_based_on_usage_flow(self, stmt_body):
        array = stmt_body['destination'][0]
        if self.satisfies_flow(array):
            dest_usage = self.ld.indexed_arrays_destination[array]['first_usage_line']
            source_usage = self.ld.indexed_arrays_source[array]['first_usage_line']
            if dest_usage <= source_usage:
                result = ""
            else:
                result = self.gen_full_stmt_flow(stmt_body)
        elif array in self.ld.indexed_arrays_destination.keys():
            result = self.gen_one_line_flow(stmt_body, 1)
        else:
            result = self.gen_full_stmt_flow(stmt_body)
        return result

    def satisfies_flow(self, array):
        return array in self.ld.indexed_arrays_destination.keys() and array in self.ld.indexed_arrays_source.keys()

    def gen_one_line_flow(self, stmt_body, element):
        destination = stmt_body['destination'][element]
        source = stmt_body['source'][element]
        self.ld.populate_values(destination, source)
        self.ld.inc_stmt_counter()
        result = destination + '=' + source
        return result

    def gen_full_stmt_flow(self, stmt_body):
        result = self.gen_one_line_flow(stmt_body, 0) + ';\n'
        result += self.ld.add_indent() + self.gen_one_line_flow(stmt_body, 1)
        return result

    def anti_dependency(self, dest_array_name, source_array_name, optimize, mix_in):
        arr_name = dest_array_name.partition('[')[0]
        arr_def = (arr_name, self.ld.data.all_arrays[arr_name])
        if mix_in == 'random':
            result = self.gen_random_part_anti(dest_array_name, source_array_name, optimize, arr_def)
        else:
            result = self.gen_scalar_part_anti(dest_array_name, source_array_name, optimize)
        return result

    def gen_random_part_anti(self, dest_array_name, source_array_name, optimize, arr_def):
        stmt_body = {}
        if optimize:
            stmt_body['destination'] = [dest_array_name]
            stmt_body['source'] = [
                f'{source_array_name}{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)}']
            # result = gen_based_on_usage_flow(stmt_body,0)
            if dest_array_name in self.ld.indexed_arrays_destination.keys() and source_array_name in self.ld.indexed_arrays_source.keys():
                result = ""
            else:
                result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
                self.ld.populate_values(stmt_body['destination'][0], stmt_body['source'][0])
        else:
            stmt_body['destination'] = [f'{self.ld.get_destination_array(self.ld.data.unique_arrays_write)}', #gen_random_stmt
                                        dest_array_name]
            stmt_body['source'] = [
                f'{source_array_name}{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)}',
                f'{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)[1:]}']
            result = self.gen_based_on_usage_anti(stmt_body, source_array_name)
        return result

    def gen_scalar_part_anti(self, dest_array_name, source_array_name, optimize):
        stmt_body = {}
        if optimize:
            stmt_body['destination'] = [dest_array_name]
            stmt_body['source'] = [
                f'{source_array_name}{random.choice(self.ld.maths_symbols)}{self.ld.gen_random_numerical_value()}']
            if dest_array_name in self.ld.indexed_arrays_destination.keys() and source_array_name in self.ld.indexed_arrays_source.keys():
                result = ""
            # result = gen_one_line_flow(stmt_body, 0)
            else:
                result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
                self.ld.populate_values(stmt_body['destination'][0], stmt_body['source'][0])
        else:
            stmt_body['destination'] = [f'{self.ld.generate_variable_name(self.ld.data.type)}', dest_array_name]
            stmt_body['source'] = [
                f'{source_array_name}{random.choice(self.ld.maths_symbols)}{self.ld.gen_random_numerical_value()}',
                f'{self.ld.gen_random_numerical_value()}']
            result = self.gen_based_on_usage_anti(stmt_body, source_array_name)
        return result

    def gen_based_on_usage_anti(self, stmt_body, source_array_name):
        array = source_array_name
        if self.satisfies_anti(array):
            dest_usage = self.ld.indexed_arrays_destination[array]['first_usage_line']
            source_usage = self.ld.indexed_arrays_source[array]['first_usage_line']
            if source_usage < dest_usage:
                result = ""
            else:
                result = self.gen_full_stmt_anti(stmt_body)
        elif array in self.ld.indexed_arrays_destination.keys():
            result = self.gen_one_line_anti(stmt_body, 1)
        else:
            result = self.gen_full_stmt_anti(stmt_body)
        return result

    def satisfies_anti(self, array):
        return array in self.ld.indexed_arrays_destination.keys() and array in self.ld.indexed_arrays_source.keys()

    def gen_one_line_anti(self, stmt_body, element):
        destination = stmt_body['destination'][element]
        source = stmt_body['source'][element]
        self.ld.populate_values(destination, source)
        self.ld.inc_stmt_counter()
        result = destination + '=' + source
        return result

    def gen_full_stmt_anti(self, stmt_body):
        result = self.gen_one_line_anti(stmt_body, 0) + ';\n'
        result += self.ld.add_indent() + self.gen_one_line_anti(stmt_body, 1)
        return result

    def output_dependency(self, dest_array_name, source_array_name, __, mix_in):
        arr_name = dest_array_name.partition('[')[0]
        arr_def = (arr_name, self.ld.data.all_arrays[arr_name])
        stmt_body = {}
        if mix_in == 'random':
            stmt_body['destination'] = [f'{dest_array_name}', f'{source_array_name}']
            stmt_body['source'] = [
                f'{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)[1:]}',
                f'{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)[1:]}']
            result = self.gen_based_on_usage_output(dest_array_name, stmt_body)
        else:
            stmt_body['destination'] = [f'{dest_array_name}', f'{source_array_name}']
            stmt_body['source'] = [f'{self.ld.gen_random_numerical_value()}', f'{self.ld.gen_random_numerical_value()}']
            result = self.gen_based_on_usage_output(dest_array_name, stmt_body)
        return result

    def gen_based_on_usage_output(self, dest_array_name, stmt_body):
        if dest_array_name in self.ld.indexed_arrays_destination.keys():
            dest_usage = self.ld.indexed_arrays_destination[dest_array_name]['occurrences_count']
            if dest_usage >= 2:
                result = ""
            elif dest_usage == 1:
                result = self.gen_stmt_output(stmt_body, 0)
        else:
            result = self.gen_stmt_output(stmt_body, 0) + ';\n'
            result += self.ld.add_indent() + self.gen_stmt_output(stmt_body, 1)
        return result

    def gen_stmt_output(self, stmt_body, element):
        destination = stmt_body['destination'][element]
        source = stmt_body['source'][element]
        self.ld.populate_values(destination, source)
        self.ld.inc_stmt_counter()
        result = destination + '=' + source
        return result

    def input_dependency(self, dest_array_name, source_array_name, __, mix_in):
        arr_name = source_array_name.partition('[')[0]
        arr_def = (arr_name, self.ld.data.all_arrays[arr_name])
        stmt_body = {}
        if mix_in == 'random':
            stmt_body['destination'] = [f'{self.ld.get_destination_array(self.ld.data.unique_arrays_write)}',
                                        f'{self.ld.get_destination_array(self.ld.data.unique_arrays_write)}']
            stmt_body['source'] = [
                f'{dest_array_name}{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)}',
                f'{source_array_name}{self.ld.gen_calc_for_read(random.choice(self.ld.data.rand_num_of_calculations), arr_def)}']
            result = self.gen_based_on_usage(source_array_name, arr_def, stmt_body)
        else:
            stmt_body['destination'] = [f'{self.ld.generate_variable_name(self.ld.data.type)}',
                                        f'{self.ld.generate_variable_name(self.ld.data.type)}']
            stmt_body['source'] = [f'{dest_array_name}{random.choice(self.ld.maths_symbols)}{self.ld.gen_random_numerical_value()}',
                                   f'{source_array_name}{random.choice(self.ld.maths_symbols)}{self.ld.gen_random_numerical_value()}']
            result = self.gen_based_on_usage(source_array_name, arr_def, stmt_body)
        return result

    def gen_based_on_usage(self, source_array_name, arr_def, stmt_body):
        if source_array_name in self.ld.indexed_arrays_source.keys():
            source_usage = self.ld.indexed_arrays_source[source_array_name]['occurrences_count']
            if source_usage >= 2:
                result = ""
            elif source_usage == 1:
                result = self.gen_stmt_input(stmt_body, 0)
        else:
            result = self.gen_stmt_input(stmt_body, 0) + ';\n'
            result += self.ld.add_indent() + self.gen_stmt_input(stmt_body, 1)
        return result

    def gen_stmt_input(self, stmt_body, element):
        destination = stmt_body['destination'][element]
        source = stmt_body['source'][element]
        self.ld.populate_values(destination, source)
        result = destination + '=' + source
        self.ld.inc_stmt_counter()
        return result