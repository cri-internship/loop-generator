# THIS CODE WILL BE REFACTORED!!!
# todo use ast eval, since eval is unsafe!
import datetime
import sys
import random
import math
import cgen as c

from collections import defaultdict
from dataclasses import dataclass
from typing import List, Tuple, Dict

from parse_input_v1 import parse_data
from code_settings import index_letters_sequence, pips_dict
from write_to_file_v1 import WriteToFile


@dataclass(eq=True, frozen=True)
class ArrayData:
    array_name: str
    index_permutation: Tuple
    distance: Tuple = None
    array_access_function: Tuple[Tuple] = None


# class CodeGenerator:
#     def __init__(self):


# todo parse_input_v1.py
# todo get rid of array_sizes__ the last two chars
def extract_instructions(instructions: List, array_sizes__: Dict):
    """Extract 'dependencies' and 'additional_computation' instructions from the DSL"""
    for instruction in instructions:
        array_name = instruction['array_name']
        index_permutation = eval(instruction['index_permutation'])
        distance = (0,) * len(array_sizes__[array_name])
        destination_array = ArrayData(array_name, index_permutation, distance=distance)

        if 'dependencies' in instruction:
            distances = eval(instruction['dependencies']['distance'])
            extract_dependencies(distances, array_name, index_permutation, destination_array)

        if 'additional_computation' in instruction:
            additional_computations = instruction['additional_computation']
            extract_additional_computations(additional_computations, destination_array)


# todo parse
def extract_dependencies(distances: List[Tuple[int]], array_name: str,
                         index_permutation: Tuple[int],
                         destination_array: ArrayData):
    """For each distance Tuple translate array name, index permutation and distance value
    to ArrayData. Assign the source array to the destination array Dict."""
    for distance in distances:
        source_array = ArrayData(array_name, index_permutation, distance=distance)
        arrays_dict[destination_array].append(source_array)


# todo parse
def extract_additional_computations(additional_computations: List, destination_array: ArrayData):
    """For each additional computation translate array name, and array access function
        to ArrayData. Assign the source array to the destination array Dict."""
    for computation in additional_computations:
        array_name = computation['array_name']
        array_access_function = eval(computation['array_access_function'])
        basic_order = tuple(range(len(array_access_function)))  # no permutations
        source_array = ArrayData(array_name, index_permutation=basic_order,
                                 array_access_function=array_access_function)
        arrays_dict[destination_array].append(source_array)


def stringify_multiplication(n: int, index_letter: str) -> str:
    """Return an integer and an index letter formatted to multiplication expression.
    When n is 0, 1 or -1 the result is compressed. """
    if n == 0:
        return ''
    elif n == 1:
        return '+' + str(index_letter)
    elif n == -1:
        return '-' + str(index_letter)
    else:
        n_str = stringify_int(n)
        return n_str + '*' + str(index_letter)


# todo rename
def tmp_array_access_function(array: str, array_access_function: List[List[int]],
                              loop_nest_depth: int) -> (str, List[str]):
    """ Translate all access functions within an array expressed as a matrix of numbers
    to expression with loop indexes. Respect loop nest depth when creating index letters.
    Example:
        array = 'A', array_access_function = [[2, 0, 0, -3], [1, 1, 1, 8]], loop_nest_depth = 3
        -> 'A', ['2*i-3', 'i+j+k+8']
    """
    array_dimensions_count = len(array_access_function)
    index_letters = adjust_sequence(index_letters_sequence, array_dimensions_count, loop_nest_depth)

    translated_array_access_function = []
    for access_fun in array_access_function:
        access_fun_str = translate_access_function_to_indexes(access_fun, index_letters,
                                                              loop_nest_depth)
        if access_fun_str and access_fun_str[0] == '+':  # remove the leading '+' sign if exists
            access_fun_str = access_fun_str[1:]
        translated_array_access_function.append(access_fun_str)
    return array, translated_array_access_function


def translate_access_function_to_indexes(access_fun: List[int], index_letters: str,
                                         loop_nest_depth: int) -> str:
    """ Return a string representation of access function expressed with loop indexes.
    Example:
        access_fun = [1, 1, 2, -1], index_letters = 'iji', loop_nest_depth = 2
        -> 'i+j+2*i-1'
    """
    coefficients = access_fun[:loop_nest_depth]
    numerical_value = access_fun[loop_nest_depth]
    zipped_coefficients_and_indexes = zip(coefficients, index_letters)
    expression = [stringify_multiplication(x, y) for x, y in zipped_coefficients_and_indexes]
    if numerical_value != 0:
        numerical_value_with_sign = stringify_int(numerical_value)
        expression.append(numerical_value_with_sign)
    return ''.join(expression)


def stringify_int(number):
    """Convert as signed number represented by a string."""
    return '{:+}'.format(number)


# todo rename -> only for destination and distances
def distance_to_array_access_function(array_data: ArrayData, loop_nest_depth: int) -> (str, List):
    """
    a  ArrayData(array_name='B', index_permutation=(2, 0, 1), distance=(1, 1), array_access_function=None) <class '__main__.ArrayData'>
    loop_nest_depth  3 <class 'int'>
    a.array_name  B <class 'str'>
    concatenated_letters_and_translations  ['k+1', 'i+1'] <class 'list'>

    """
    index_permutation = array_data.index_permutation
    distance = array_data.distance
    array_dimensions_count = len(distance)

    index_letters = adjust_sequence(index_letters_sequence, array_dimensions_count, loop_nest_depth)
    permuted_index_letters = permute_sequence(index_letters, index_permutation,
                                              array_dimensions_count, loop_nest_depth)
    letters = permuted_index_letters[:array_dimensions_count]
    distances_as_str = stringify_to_signed_numbers_without_zero(distance)
    letters_and_distances = zip(letters, distances_as_str)
    concatenated_letters_and_translations = [letter + distance for letter, distance in
                                             letters_and_distances]

    return array_data.array_name, concatenated_letters_and_translations


def adjust_sequence(sequence, array_dimensions_count: int, loop_nest_depth: int):
    """Adjust the sequence (of index letters or permutation order) to match array dimensions count
    and loop nest depth.
    Example:
        sequence = 'ijklmnopqrstuvwxyzabcdefgh', array_dimensions_count = 3,
        loop_nest_depth = 1 -> 'iii'   ||       loop_nest_depth = 2 -> 'iji'
        loop_nest_depth = 3 -> 'ijk'   ||       loop_nest_depth = 4 -> 'ijkl'
    """
    sequence = sequence[:loop_nest_depth]
    quot, rem = divmod(array_dimensions_count, loop_nest_depth)
    if quot >= 1:
        sequence *= quot
        sequence += sequence[:rem]
    return sequence


def permute_sequence(sequence_to_permute: str, permutation: Tuple,
                     array_dimensions_count: int, loop_nest_depth: int) -> List:
    """Return permuted sequence as a list.
    Example:
        sequence_to_permute = 'ijk', permutation = (2, 0, 1), array_dimensions_count = 2
        loop_nest_depth = 3   ->   ['k', 'i', 'j']
    """
    permutation = adjust_sequence(permutation, array_dimensions_count, loop_nest_depth)
    return [sequence_to_permute[i] for i in permutation]


def concatenate_with_square_brackets(indexes: List) -> str:
    """Separate each dimension access function by surrounding it with square brackets.
    Example:
        ['2*i+8', 'i+j+k+8', '-2*k'] -> '[2*i+8][i+j+k+8][-2*k]' 
    """
    return '{}'.format(''.join('[{}]'.format(i) for i in indexes))


def stringify_to_signed_numbers_without_zero(numbers: Tuple[int]) -> Tuple[str]:
    """ Stringify sequence of numbers. When the number is 0 convert it to an empty string."""
    return tuple(stringify_int(n) if n != 0 else '' for n in numbers)


# todo settings file maths_symbols
def get_statement_symbols(num_of_calculations: int) -> List[str]:
    """Return the list of symbols used in statement in the correct order. The first one is '='
    and the last one is ';' separated by maths symbols."""
    maths_symbols = ['+', '-', '*']
    random_maths_symbols = [random.choice(maths_symbols) for _ in range(num_of_calculations)]
    return ['='] + random_maths_symbols + [';']


# todo rename bounds_data
def update_bounds_based_on_distances(array_size: Tuple[int], index_permutation: Tuple[int],
                                     distances: Tuple[int], bounds_data: Dict,
                                     loop_nest_depth: int):
    """Based on the distances update the min and max numerical bounds."""
    for i, distance in enumerate(distances):
        index_letters = adjust_sequence(index_letters_sequence, len(array_size), loop_nest_depth)
        index_perm = permute_sequence(index_letters, index_permutation, len(array_size),
                                      loop_nest_depth)
        position = index_perm[i]
        rank = index_letters_sequence.index(position)  # distances always have the rank of the index
        lower_bound_val = distance * (-1)  # invert the value
        upper_bound_val = array_size[i] - distance
        bounds_data[rank]['min']['numerical'].add(lower_bound_val)
        bounds_data[rank]['max']['numerical'].add(upper_bound_val)


def get_rank(sequence) -> int:
    """Return the position in the sequence that is the last one to have the value != 0."""
    for i, el in enumerate(reversed(sequence)):
        if el != 0:
            return len(sequence) - i - 1
    return -1  # todo custom exception


def update_bounds_based_on_access_function(array_name: str, my_copy: List[List[int]],
                                           loop_nest_depth: int, bounds_data: Dict, rank: int,
                                           expr_min_max: str, value_at_rank: int, fun=None):
    """Update bounds by evaluating access function."""
    # extract only the access function that will be an only element of the result array
    access_function = tmp_array_access_function(array_name, my_copy, loop_nest_depth)[1][0]
    if fun:
        access_function = fun(access_function, abs(value_at_rank))
    pos, expr = evaluate_expression(access_function)
    bounds_data[rank][expr_min_max][pos].add(expr)


def calculate_bounds(array_name: str, array_size: Tuple[int], array_access_function: List[int],
                     position: int, loop_nest_depth: int, bounds_data: Dict):
    """Based on rank of the array_access_function update the min and max bounds."""
    rank = get_rank(array_access_function[:-1])  # don't pass the numerical value

    if rank == -1:  # we don't want to have an expression like C[-1] when access fun is [0,0,0, -1]
        value = array_access_function[-1]
        max_array_size = array_size[position]
        if value not in range(0, max_array_size):
            error_msg = 'Constant array access function not within the array size bounds: '
            error_msg += array_name + str(array_access_function)
            raise ValueError(error_msg)
    else:
        value_at_rank = array_access_function[rank]

        copy = array_access_function[:]  # use a copy
        copy[rank] = 0  # very important step!
        right_bound = array_size[position]  # left bound is always 0 in C
        fun = None
        lower_bound, upper_bound = [], []
        if value_at_rank == 1:
            lower_bound = get_opposite_numbers(copy)
            upper_bound = lower_bound[:]
            upper_bound[-1] += right_bound

        elif value_at_rank == -1:
            upper_bound = copy[:]
            lower_bound = upper_bound[:]
            lower_bound[-1] -= right_bound

        elif value_at_rank > 1:
            alpha = value_at_rank
            alpha_min_1 = alpha - 1

            lower_bound = get_opposite_numbers(copy)
            lower_bound[-1] += alpha_min_1
            upper_bound = lower_bound[:]
            upper_bound[-1] += right_bound  # alpha_min_1 already added
            fun = write_as_fraction

        elif value_at_rank < -1:
            alpha = value_at_rank * (-1)
            alpha_min_1 = alpha - 1

            lower_bound = copy[:]
            lower_bound[-1] += alpha_min_1 - right_bound

            upper_bound = copy[:]
            upper_bound[-1] += alpha_min_1
            fun = write_as_fraction

        if lower_bound and upper_bound:
            update_bounds_based_on_access_function(array_name, [lower_bound], loop_nest_depth,
                                                   bounds_data, rank, 'min', value_at_rank, fun)

            update_bounds_based_on_access_function(array_name, [upper_bound], loop_nest_depth,
                                                   bounds_data, rank, 'max', value_at_rank, fun)


def get_opposite_numbers(sequence):
    """Multiply each element in a sequence by -1 and return as a list."""
    return [(-1) * el for el in sequence]


def write_as_fraction(numerator: str, denominator: int) -> str:
    """Form a common fraction and return as a string.""" # todo check if den != 1
    return '({})/{}'.format(numerator, abs(denominator))


def evaluate_expression(expression):
    """Try to evaluate the expression (especially common fractions from calculating bounds).
    If it is possible to evaluate then this value will be added to the numerical values of bounds,
    otherwise it will be added unchanged.
    Examples:
        expression = '(12)/2' -> 'numerical', 6
        expression = '-i-j-8' -> 'string', '-i-j-8'
    """
    try:
        expression = math.floor(eval(expression))
        expression_type = 'numerical'
    except NameError:
        expression_type = 'string'
    return expression_type, expression


def values_to_bounds(_rank_data, fun):
    # calclulate bounds based only on numerical values
    if _rank_data['numerical']:
        val = fun(_rank_data['numerical'])
    elif fun.__name__ == 'max':
        val = 0
    else:  # when it's empty
        exponent = random.randint(1, 12)  # todo settings - range
        val = 2 ** exponent

    if not _rank_data['string']:
        bound = val
    else:
        vals = list(_rank_data['string'])
        num_val = val
        vals.append(str(num_val))

        num_of_vals = len(vals)
        macro_name = pips_dict[fun.__name__][num_of_vals]
        pips_macros.add(macro_name)

        vals = ', '.join(vals)
        bound = '{}({})'.format(macro_name, vals)
    return bound


def translate_calculated_values_to_bounds(bounds_data):
    loop_structure = []
    for key in sorted(bounds_data.keys()):
        calc_bound(bounds_data[key], 'min', max)
        calc_bound(bounds_data[key], 'max', min)
        loop_structure.append(generate_for_loop_structure(key, bounds_data))
    return loop_structure


def calc_bound(_rank_data, parameter, fun):
    bound = values_to_bounds(_rank_data[parameter], fun)
    _rank_data[parameter]['bound_value'] = bound


def generate_for_loop_structure(rank: int, bounds_data: Dict) -> str:
    """Return formatted for loop structure filled with bounds."""
    loop_index = index_letters_sequence[rank]
    lower_bound = bounds_data[rank]['min']['bound_value']
    upper_bound = bounds_data[rank]['max']['bound_value']
    indent = get_indent(rank)
    loop_expression = 'for (int {0} = {1}; {0} < {2}; {0}++)'.format(loop_index, lower_bound,
                                                                     upper_bound)
    # print(indent + loop_expression)
    LOOP_BODY.append(indent + loop_expression)
    return indent + loop_expression


def get_indent(level: int) -> str:
    """Return indent for the generated code expressions."""
    base_indent = ' ' * 4
    return base_indent * level


def create_bounds_data(loop_nest_depth: int) -> Dict:
    """Create a dict that will store loop bounds for each loop nest level."""
    bounds_data = {}
    for i in range(loop_nest_depth):
        bounds_data[i] = {
            'min': {'numerical': set(), 'string': set(), 'bound_value': None},
            'max': {'numerical': set(), 'string': set(), 'bound_value': None}}
    return bounds_data


def main_function(loop_nest_depth, bounds_data, array_sizes: Dict):
    result_statements = []
    for dest_arr in arrays_dict.keys():
        arrays_in_statement = []
        array_name, indexed_array_access_fun = distance_to_array_access_function(dest_arr,
                                                                                 loop_nest_depth)
        array_dims = concatenate_with_square_brackets(indexed_array_access_fun)
        arrays_in_statement.append(array_name + array_dims)
        update_bounds_based_on_distances(array_sizes[dest_arr.array_name],
                                         dest_arr.index_permutation,
                                         dest_arr.distance, bounds_data, loop_nest_depth)

        for source_arr in arrays_dict[dest_arr]:
            if source_arr.array_access_function is not None:
                tmp1 = tmp_array_access_function(source_arr.array_name,
                                                 source_arr.array_access_function, loop_nest_depth)

                for _i, array_access_function in enumerate(source_arr.array_access_function):
                    array_size = array_sizes[source_arr.array_name]
                    calculate_bounds(source_arr.array_name, array_size, array_access_function, _i,
                                     loop_nest_depth, bounds_data)


            else:
                tmp1 = distance_to_array_access_function(source_arr, _loop_nest_depth)

                _array_size = array_sizes[source_arr.array_name]
                _index_permutation = source_arr.index_permutation
                _distance = source_arr.distance
                update_bounds_based_on_distances(_array_size,
                                                 _index_permutation,
                                                 _distance, bounds_data, _loop_nest_depth)

            arrays_in_statement.append(tmp1[0] + concatenate_with_square_brackets(tmp1[1]))
        result_statements.append(arrays_in_statement)
    return result_statements


def convert_statements_to_expressions(result_statements):
    loop_body = []
    for element in result_statements:
        statement_symbols = get_statement_symbols(len(element) - 2)  # '=' and ';' are included
        statement = []
        for elem in zip(element, statement_symbols):
            statement.extend(elem)
        loop_body.append(statement)
    return loop_body


def get_final_loop(total_res):
    final_loop = []
    indent = get_indent(_loop_nest_depth - 1)
    LOOP_BODY.append(indent+ '{')
    final_loop.append(indent)
    final_loop.append('{')
    final_loop.append('\n')
    indent = get_indent(_loop_nest_depth)
    for el in total_res:
        final_loop.append(indent + ''.join(el) + '\n')
        LOOP_BODY.append(indent + ''.join(el))
    indent = get_indent(_loop_nest_depth - 1)
    final_loop.append(indent + '}' + '\n')
    LOOP_BODY.append(indent+ '}')

    return ''.join(final_loop)


def get_timestamp():
    return str(datetime.datetime.now().timestamp())


def create_file_name():
    extension = '.c'
    prefix = 'output/kern_'
    file_name = prefix + get_timestamp() + extension
    return file_name


def write_to_file(text, output_file):
    with open(output_file, 'a+') as file:
        file.write(text)
        file.write('\n')


if __name__ == '__main__':
    filename = sys.argv[1]
    arrays_dict = defaultdict(list)
    pips_macros = set()
    _parsed_data = parse_data(filename)
    _loop_nest_depth = _parsed_data.loop_nest_level
    _all_arrays = _parsed_data.array_sizes__
    _data_type = _parsed_data.type
    _init_with = _parsed_data.init_with

    LOOP_BODY = []

    extract_instructions(_parsed_data.instructions, _all_arrays)

    _rank_data = create_bounds_data(_loop_nest_depth)

    _result_statements = main_function(_loop_nest_depth, _rank_data, _all_arrays)

    _total_res = convert_statements_to_expressions(_result_statements)

    loop_structure = translate_calculated_values_to_bounds(_rank_data)

    loop_body = get_final_loop(_total_res)

    # print(loop_body)
    print('// needed macros ' + str(pips_macros))

    wf = WriteToFile(LOOP_BODY, _all_arrays, _data_type, _init_with)
