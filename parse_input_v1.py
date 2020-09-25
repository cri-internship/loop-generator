import json

from dataclasses import dataclass, field
from dataclasses_json import dataclass_json

from typing import List, Tuple


@dataclass_json
@dataclass
class DataClass:
    array_sizes: dict
    distances: dict
    type: str
    init_with: str
    loop_nest_level: int
    arrays: List
    instructions: List
    all_arrays: dict = field(init=False)

    def __post_init__(self):
        # validate_loop_nest_level(self.loop_nest_level)
        # validate_type(self.type, settings.array_type_options)
        # validate_init_value(self.init_with, settings.array_init_options)

        unparsed_arrays = self.arrays
        array_sizes_vars = self.array_sizes
        res = parse_to_array(unparsed_arrays, array_sizes_vars)
        self.all_arrays = get_arrays_with_sizes(res)

def validate_loop_nest_level(loop_nest_lvl):
    if not isinstance(loop_nest_lvl, int) or loop_nest_lvl < 1:  # todo define min loop nest level
        error_msg = 'Wrong loop nest level. Expected a positive integer.'
        raise TypeError(error_msg)


def validate_type(data_type, acceptable_types: List[str]):
    """ Expected variable types are: 'int', 'float' or 'double'. """
    if data_type not in acceptable_types:
        error_msg = f'Wrong C data type. Acceptable types are: {acceptable_types}'
        raise TypeError(error_msg)


def validate_init_value(init_value, acceptable_init_values) -> str:
    """ Expected init values are: 'ones', 'zeros', or 'random'. """
    if init_value not in acceptable_init_values:
        error_msg = 'Wrong option of array initialization. ' \
            f'Expected one of: {acceptable_init_values}'
        raise TypeError(error_msg)


def get_arrays_with_sizes(arrays):
    """
    {'B': (64, 32, 32), 'C': (64, 16, 64), 'A': (65536,)}
    :return:
    """
    arrays_dict = {}
    for array in arrays:
            arrays_dict[array[0]] = array[1]
    return arrays_dict


def validate_distance_parameters():
    pass


def validate_array_access_function():
    pass


# def validate_permutation(loop_nest_level, permutation):
#     return all(i in permutation for i in range(loop_nest_level))

def parse_indexes(str, **kwargs):
    try:
        return eval(str, kwargs)
    except NameError as err:
        print(err)


def parse_string_array(name_with_dims: str, **array_sizes_vars) -> Tuple[str, Tuple[int]]:
    # todo this type might not be correct
    # in: A[xA,yA,zA] || C[xC,yC] || B[16,32]
    # out: (A, (16,64,16)) || (B,(65536,))
    """From string array in input make a tuple (name, (sizes))"""
    # Eliminate whitespaces
    name_with_dims = name_with_dims.replace(" ", "")
    left_bracket_pos = name_with_dims.find('[')
    right_bracket_pos = name_with_dims.find(']')
    array_name = name_with_dims[:left_bracket_pos]
    eval_sizes = name_with_dims[left_bracket_pos:right_bracket_pos + 1]
    sizes = tuple(parse_indexes(eval_sizes, **array_sizes_vars))

    return array_name, sizes


def parse_to_array(array, array_sizes_vars):
    return [parse_string_array(arr, **array_sizes_vars) for arr in array]


def calculate_num_of_calculations(array):
    return [i + 1 for i in range(len(array) - 1)]


def read_file_data(filename):
    with open(filename, 'r') as file:
        data = json.load(file)[0]
        return data


def parse_data(filename):
    input_data = read_file_data(filename)
    data = DataClass.from_dict(input_data)
    return data
