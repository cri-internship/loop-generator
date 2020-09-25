# THIS CODE WILL BE REFACTORED!!!

import sys
import random
import math
import cgen as c

from collections import defaultdict
from dataclasses import dataclass
from typing import List, Tuple

from parse_input_v1 import parse_data
from code_settings import index_letters_sequence, pips_dict


@dataclass(eq=True, frozen=True)
class ArrayData:
    array_name: str
    index_permutation: Tuple
    distance: Tuple = None
    array_access_function: Tuple[Tuple] = None

def extract_instructions(instructions):
    for instruction in instructions:
        array_name = instruction['array_name']
        index_permutation = eval(instruction['index_permutation'])
        distance = (0,) * len(all_arrays[array_name])
        destination_array = ArrayData(array_name, index_permutation, distance=distance)

        if 'dependencies' in instruction:
            distances = eval(instruction['dependencies']['distance'])
            extract_dependencies(distances, array_name, index_permutation, destination_array)

        if 'additional_computation' in instruction:
            additional_computations = instruction['additional_computation']
            extract_additional_computations(additional_computations, destination_array)


def extract_dependencies(distances, array_name, index_permutation, destination_array):
    for distance in distances:
        source_array = ArrayData(array_name, index_permutation, distance=distance)
        arrays_dict[destination_array].append(source_array)


def extract_additional_computations(additional_computations, destination_array):
    for computation in additional_computations:
        array_name = computation['array_name']
        basic_order = tuple(range(len(all_arrays[array_name])))
        array_access_function = eval(computation['array_access_function'])
        source_array = ArrayData(array_name,
                                 index_permutation=basic_order,
                                 array_access_function=array_access_function)
        arrays_dict[destination_array].append(source_array)


def stringify_multiplication(n, index_letter):
    n = '{:+}'.format(n)
    if n == '+0':
        return ''
    elif n == '+1':
        return '+' + str(index_letter)
    elif n == '-1':
        return '-' + str(index_letter)
    elif n != '+0':
        return n + '*' + str(index_letter)


def tmp_array_access_function(array, array_access_function, loop_nest_depth):
    # ex. [[0, 2, 0, 8], [1, 1, 1, 8]] --> ['2*j+8', 'i+j+k+8']
    array_dimensions_count = len(array_access_function)
    index_letters = adjust_sequence(index_letters_sequence, array_dimensions_count, loop_nest_depth)

    res = []
    for access_fun in array_access_function:
        my_res = translate_array_access_function_to_indexes(access_fun, index_letters,
                                                            loop_nest_depth)
        res.append(my_res)

    res1 = []  # why sometimes it's more than 1 item?
    for r in res:
        t1 = ''.join(r)
        if t1 and t1[0] == '+':  # remove the leading '+' sign if exists
            t1 = t1[1:]
        res1.append(t1)

    return array, res1


def translate_array_access_function_to_indexes(access_fun, index_letters_sequence,
                                               loop_nest_depth):
    """
    [1, 1, 1, 8] --> [i + j + k + 8]
    :return:
    """
    values = access_fun[:loop_nest_depth]
    zipped_values_and_indexes = zip(values, index_letters_sequence)
    tmp = [stringify_multiplication(x, y) for x, y in zipped_values_and_indexes]
    numerical_value = access_fun[loop_nest_depth]
    if numerical_value != 0:  # it's
        tmp.append('{:+}'.format(numerical_value))
    return tmp


def stringify_number(number):
    return '{:+}'.format(number)


def translate_to_statement(a, loop_nest_depth):
    order = a.index_permutation
    array_size = len(a.distance)
    index_letters = adjust_sequence(index_letters_sequence, array_size,
                                    loop_nest_depth)

    permuted_index_letters = permute_sequence(index_letters, order, array_size,
                                              loop_nest_depth)

    num_of_dimenstions = len(a.distance)
    letters = permuted_index_letters[:num_of_dimenstions]

    translations = a.distance
    stringified_translations = stringify_to_signed_numbers(translations)
    concatenated_letters_and_translations = [a + b for a, b in
                                             zip(letters, stringified_translations)]
    return a.array_name, concatenated_letters_and_translations


def adjust_sequence(sequence, array_dimensions_count, loop_nest_depth):
    sequence = sequence[:loop_nest_depth]
    quot, rem = divmod(array_dimensions_count, loop_nest_depth)
    if quot >= 1:
        sequence *= quot
        sequence += sequence[:rem]
    return sequence


def permute_sequence(sequence_to_permute, permutation, array_dimensions_count, loop_nest_depth):
    permutation = adjust_sequence(permutation, array_dimensions_count, loop_nest_depth)
    return [sequence_to_permute[i] for i in permutation]


def format_stringified_indexes(indexes):
    return '{}'.format(''.join('[{}]'.format(i) for i in indexes))


def stringify_to_signed_numbers(numbers):
    # but when it will be '+0' then don't append it
    # (-3, 0, +1) -> ('-3', '', '+1')
    return tuple('{:+}'.format(n) if n != 0 else '' for n in numbers)


def get_maths_symbols(num_of_calculations: int) -> List[str]:
    """
    :param num_of_calculations:
    :return:
    """
    maths_symbols = ['+', '-', '*']
    return ['='] + [random.choice(maths_symbols) for _ in range(num_of_calculations)] + [';']


def distance_to_array_access_function(array_size, index_permutation, distance,
                                      rank_data, loop_nest_depth):
    for i, dist in enumerate(distance):
        index_letters = adjust_sequence(index_letters_sequence, len(array_size),
                                        loop_nest_depth)
        index_perm = permute_sequence(index_letters,
                                      index_permutation, len(array_size),
                                      loop_nest_depth)

        position = index_perm[i]
        rank = index_letters_sequence.index(
            position)  # distances will always have the rank of the index
        lower_bound_val = dist * (-1)  # invert the value
        upper_bound_val = array_size[i] - dist
        rank_data[rank]['min']['numerical'].add(lower_bound_val)
        rank_data[rank]['max']['numerical'].add(upper_bound_val)


def get_rank(my_list):
    for i, el in enumerate(reversed(my_list)):
        if el != 0:
            return len(my_list) - i - 1
    return -1


def add_expression_to_rank_data(array_name, my_copy, loop_nest_depth, rank_data, rank, expr_min_max,
                                rank_value, fun=None):
    res = get_array_access_function(array_name, my_copy, loop_nest_depth)
    if fun:
        res = fun(res, abs(rank_value))
    pos, expr = evaluate_expression(res)
    rank_data[rank][expr_min_max][pos].add(expr)


def calculate_bounds(array_name, array_size, array_access_function, position, loop_nest_depth, rank_data):
    rank = get_rank(array_access_function[:-1])

    if rank == -1:  # we don't want to have sth like C[-1] when access fun is [0,0,0, -1]
        value = array_access_function[-1]
        max_array_size = array_size[position]
        if value not in range(0, max_array_size):
            error_msg = 'Constant array access function not within the array size bounds: '
            error_msg += array_name + str(array_access_function)
            raise ValueError(error_msg)
    else:
        rank_value = array_access_function[rank]

        copy = array_access_function[:]  # use a copy
        copy[rank] = 0  # very important step!
        right_bound = array_size[position]  # left bound is always 0 in C
        fun = None
        lower_bound, upper_bound = [], []
        if rank_value == 1:
            lower_bound = get_opposite_numbers(copy)
            upper_bound = lower_bound[:]
            upper_bound[-1] += right_bound

        elif rank_value == -1:
            upper_bound = copy[:]
            lower_bound = upper_bound[:]
            lower_bound[-1] -= right_bound

        elif rank_value > 1:
            alpha = rank_value
            alpha_min_1 = alpha - 1

            lower_bound = get_opposite_numbers(copy)
            lower_bound[-1] += alpha_min_1
            upper_bound = lower_bound[:]
            upper_bound[-1] += right_bound # alpha_min_1 already added
            fun = write_as_fraction

        elif rank_value < -1:
            alpha = rank_value * (-1)
            alpha_min_1 = alpha - 1

            lower_bound = copy[:]
            lower_bound[-1] += alpha_min_1 - right_bound

            upper_bound = copy[:]
            upper_bound[-1] += alpha_min_1
            fun = write_as_fraction

        if lower_bound and upper_bound:
            add_expression_to_rank_data(array_name, [lower_bound], loop_nest_depth, rank_data, rank,
                                        'min', rank_value, fun)

            add_expression_to_rank_data(array_name, [upper_bound], loop_nest_depth, rank_data, rank,
                                        'max', rank_value, fun)


def get_opposite_numbers(sequence):
    return [(-1) * val for val in sequence]


def write_as_fraction(numerator, denominator):
    return '({})/{}'.format(numerator, abs(denominator))


def evaluate_expression(expression):
    try:
        expression = math.floor(eval(expression))
        type = 'numerical'
    except NameError:
        type = 'string'
    return type, expression  # todo change order


def get_array_access_function(array, array_access_function, loop_nest_depth):
    res = tmp_array_access_function(array, array_access_function, loop_nest_depth)
    return res[1][0]  # tmp_array_access_function returns sth like ('C', ['-i-8'])


def values_to_bounds(_rank_data, fun):
    if _rank_data['numerical']:
        val = fun(_rank_data['numerical'])
    elif fun.__name__ == 'max':
        val = 0
    else:
        exponent = random.randint(1, 12)
        val = 2 ** exponent

    if not _rank_data['string']:
        bound = val
    else:
        vals = list(_rank_data['string'])
        num_val = val
        vals.append(str(num_val))

        num_of_vals = len(vals)
        macro_name = pips_dict[fun.__name__][num_of_vals]
        pips_needed.add(macro_name)

        vals = ', '.join(vals)
        bound = '{}({})'.format(macro_name, vals)
    return bound


def translate_calculated_values_to_bounds(rank_data):
    for key in sorted(rank_data.keys()):
        calc_bound(rank_data[key], 'min', max)
        calc_bound(rank_data[key], 'max', min)
        print_for_loop_structure(key, rank_data)


def calc_bound(_rank_data, parameter, fun):
    bound = values_to_bounds(_rank_data[parameter], fun)
    _rank_data[parameter]['bound_value'] = bound


def print_for_loop_structure(key, rank_data):
    loop_index = index_letters_sequence[key]
    lower_bound = rank_data[key]['min']['bound_value']
    upper_bound = rank_data[key]['max']['bound_value']
    indent = get_indent(key)
    s = indent + 'for (int {0} = {1}; {0} < {2}; {0}++)'.format(loop_index, lower_bound,
                                                                upper_bound)
    print(s)


def get_indent(lvl):
    base_indent = ' ' * 4
    return base_indent * lvl


def create_rank_data(loop_nest_depth):
    rank_data = {}
    for i in range(loop_nest_depth):
        rank_data[i] = {
            'min': {'numerical': set(), 'string': set(), 'bound_value': None},
            'max': {'numerical': set(), 'string': set(), 'bound_value': None}}
    return rank_data


def main_function(loop_nest_depth, rank_data):
    result_statements = []
    for dest_arr in arrays_dict.keys():
        arrays_in_statement = []
        array_name, indexed_array_access_fun = translate_to_statement(dest_arr, loop_nest_depth)

        arrays_in_statement.append(
            array_name + format_stringified_indexes(indexed_array_access_fun))

        distance_to_array_access_function(all_arrays[dest_arr.array_name],
                                          dest_arr.index_permutation, dest_arr.distance, rank_data,
                                          loop_nest_depth)

        for source_arr in arrays_dict[dest_arr]:
            if source_arr.array_access_function is not None:
                tmp1 = tmp_array_access_function(source_arr.array_name,
                                                 source_arr.array_access_function, loop_nest_depth)

                for _i, array_access_function in enumerate(source_arr.array_access_function):
                    array_size = all_arrays[source_arr.array_name]
                    calculate_bounds(source_arr.array_name, array_size, array_access_function, _i,
                        loop_nest_depth, rank_data)


            else:
                tmp1 = translate_to_statement(source_arr, _loop_nest_depth)

                _array_size = all_arrays[source_arr.array_name]
                _index_permutation = source_arr.index_permutation
                _distance = source_arr.distance
                distance_to_array_access_function(_array_size,
                                                  _index_permutation,
                                                  _distance, rank_data, _loop_nest_depth)

            arrays_in_statement.append(tmp1[0] + format_stringified_indexes(tmp1[1]))
        result_statements.append(arrays_in_statement)
    return result_statements


def convert_statements_to_expressions(result_statements):
    total_res = []
    for res in result_statements:
        maths_sybols = get_maths_symbols(len(res) - 2)
        tmp = []
        for elem in zip(res, maths_sybols):
            tmp.extend(elem)
        total_res.append(tmp)
    return total_res


def get_final_loop(total_res):
    final_loop = []
    indent = get_indent(_loop_nest_depth - 1)
    final_loop.append(indent)
    final_loop.append('{')
    final_loop.append('\n')
    indent = get_indent(_loop_nest_depth)
    for el in total_res:
        final_loop.append(indent + ''.join(el) + '\n')
    indent = get_indent(_loop_nest_depth - 1)
    final_loop.append(indent + '}' + '\n')
    return ''.join(final_loop)


if __name__ == '__main__':
    filename = sys.argv[1]
    arrays_dict = defaultdict(list)
    pips_needed = set()
    _parsed_data = parse_data(filename)
    _loop_nest_depth = _parsed_data.loop_nest_level
    all_arrays = _parsed_data.all_arrays

    extract_instructions(_parsed_data.instructions)

    _rank_data = create_rank_data(_loop_nest_depth)

    _result_statements = main_function(_loop_nest_depth, _rank_data)

    _total_res = convert_statements_to_expressions(_result_statements)

    translate_calculated_values_to_bounds(_rank_data)

    final_loop = get_final_loop(_total_res)

    print(final_loop)
    print('// needed macros ' + str(pips_needed))

