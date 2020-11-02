import json
import random
import re
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
    unique_arrays_write: List
    unique_arrays_read: List
    dependencies: dict
    all_arrays: dict = field(init=False)
    rand_num_of_calculations: List = field(init=False)

    def __post_init__(self):
        validate_loop_nest_level(self.loop_nest_level)
        validate_type(self.type, ['int', 'float', 'double'])
        validate_init_value(self.init_with, ['ones', 'zeros', 'random', 'halo'])

        unparsed_arrays_write = self.unique_arrays_write
        unparsed_arrays_read = self.unique_arrays_read
        array_sizes_vars = self.array_sizes
        distances_vars = self.distances

        self.unique_arrays_write = {
            "used": set(),
            "unused": set(parse_to_array(unparsed_arrays_write, array_sizes_vars))}
        self.unique_arrays_read = {
            "used": set(),
            "unused": set(parse_to_array(unparsed_arrays_read, array_sizes_vars))}

        self.all_arrays = validate_array_sizes(self.unique_arrays_write,
                                               self.unique_arrays_read)

        # self.dependencies = parse_dependencies(self.dependencies, self.all_arrays,
        #                                        distances_vars)

        parse_dependencies(self.dependencies, self.all_arrays,
                           distances_vars)
        self.rand_num_of_calculations = calculate_num_of_calculations(
            self.unique_arrays_read["unused"])


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


def validate_array_sizes(unique_arrays_write, unique_arrays_read):
    # todo: later there will only be "unique arrays" so I don't refactor it for now
    """
    {'B': (64, 32, 32), 'C': (64, 16, 64), 'A': (65536,)}
    :return:
    """
    """Make union of read and write arrays, add array to array_dict if it's not there, otherwise
     checks if the sizes for similar arrays are the same if not raise an error
    :return dict with arrays name as key and size as value
    """
    arrays_union = unique_arrays_write['unused'].union(unique_arrays_read['unused'])
    arrays_dict = {}
    for el in arrays_union:
        if el[0] in arrays_dict and el[1] != arrays_dict[el[0]]:
            error = f'Arrays {el[0]} have different sizes'
            raise TypeError(error)
        else:
            arrays_dict[el[0]] = el[1]
    return arrays_dict


def parse_dependencies(all_dependencies, all_arrays, distances_vars):
    """
in:  {'INPUT':
        [{'array_name': 'A', 'distance': '(1,2,5,)', 'mix_in': 'num_val'},
        {'array_name': 'B', 'distance': '(5,5,4,)', 'mix_in': 'num_val'}]} <class 'dict'>
out:{'INPUT': [{'array_name': 'A', 'distance': ((0, 1), (0, 2), (0, 5)), 'mix_in': 'num_val', 'optimize': True, 'left_side_index': (0, 0, 0)},
        {'array_name': 'B', 'distance': ((0, -5), (0, -5), (0, -4)), 'mix_in': 'num_val', 'optimize': True, 'left_side_index': (0, 0, 0)}]} * <class 'dict'>
    """

    """
    Check if left_side_index and distances are correct, parse indexes, check if optimization is possible.
    :arg all_dependencies: not parsed dependencies
    :return dependencies with parsed distances
    """

    for dependency_name, arrays in all_dependencies.items():  # here we extract types like 'FLOW', 'ANTI', 'OUTPUT', 'INPUT' and arrays on which we need to make changes
        for array in arrays:  # ex. for every 'INPUT' -> A and B
            array_name = array['array_name']
            try:
                all_arrays[array_name]
            except KeyError:
                error = f'Array "{array_name}" does not exist'
                raise TypeError(error)

            flip = random.choice(('-1', '+1'))  # todo why is it needed???

            deps_to_parse = re.findall(r'\(.*?\)', array[
                'distance'])  # in 'distance' we can also have variables like d1, d2, ...
            distances = []
            for dep in deps_to_parse:
                distances.append(parse_indexes(dep, **distances_vars))

            # if at least one distance consists of 0, it can't be optimized
            optimize = True
            for dist in distances:
                filtered_dist = list(filter(lambda x: x == 0, dist))
                if len(filtered_dist) == len(dist):
                    optimize = False
            array['optimize'] = optimize

            # parse left_side_index
            if 'left_side_index' in array:
                left_side_index = parse_indexes(array['left_side_index'],
                                                **distances_vars)
            else:
                left_side_index = tuple(0 for _ in range(0, len(distances[0])))
            array['left_side_index'] = left_side_index

            # check if left_side_index has the same size as array
            if not len(all_arrays[array_name]) == len(left_side_index):
                error = f'Array {array_name} has wrong left side index'
                raise TypeError(error)

            # check if distance has the same size as array
            if not len(list(
                    filter(lambda x: len(x) == len(all_arrays[array_name]), distances))) == len(
                distances):
                error = f'Array {array_name} has wrong distance size in dependency'
                raise TypeError(error)

            tmp_distance = []
            for index in range(len(distances[0])):
                dest_dist = left_side_index[index]
                # check if distance is a positive number less then size
                for d in distances:
                    if d[index] < 0 or d[index] > all_arrays[array_name][index]:
                        error = f'Array {array_name} has wrong distance in dependency'
                        raise TypeError(error)

                if dependency_name == 'FLOW':
                    distance = [-d[index] + dest_dist for d in distances]
                elif dependency_name == 'ANTI':
                    distance = [d[index] + dest_dist for d in distances]
                else:
                    distance = [eval(flip) * d[index] + dest_dist for d in distances]

                distance.insert(0, dest_dist)
                distance = tuple(distance)
                tmp_distance.append(distance)
            array['distance'] = tuple(tmp_distance)

def validate_distance_parameters():
    pass


def parse_indexes(str, **kwargs):  # todo exception can be rised and cought in
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
