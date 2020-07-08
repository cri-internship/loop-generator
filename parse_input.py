import random
import re
from typing import List, Tuple

class ParseInput:
    def __init__(self):
        pass

    @staticmethod
    def validate_loop_nest_level(loop_nest_lvl) -> int:
        """
        :param loop_nest_lvl: integer
        :return:
        """
        if type(loop_nest_lvl) == int:
            return loop_nest_lvl
        else:
            raise TypeError("Wrong loop nest level.")

    @staticmethod
    def validate_type(type, acceptable_types: List[str]) -> str:
        """ Expected variable types are: 'int', 'float' or 'double'. """
        if type in acceptable_types:
            return type
        else:
            error = f'Acceptable types are: {acceptable_types}'
            raise TypeError(error)

    @staticmethod
    def validate_init_value(init_value, acceptable_init_values) -> str:
        """ Expected init values are: 'ones', 'zeros', or 'random'. """
        if init_value in acceptable_init_values:
            return init_value
        else:
            error = f'Acceptable values to validate arrays with are: {acceptable_init_values}'
            raise TypeError(error)

    @staticmethod
    def validate_array_sizes(unique_arrays_write, unique_arrays_read):
        #todo: later there will only be "unique arrays" so I don't refactor it for now
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

    @staticmethod
    def parse_dependencies(all_dependencies, all_arrays, distances_vars):
        # in: IN_1     {'INPUT': [{'array_name': 'A', 'distance': '(1,2,5,)', 'mix_in': 'num_val'}, {'array_name': 'B', 'distance': '(5,5,4,)', 'mix_in': 'num_val'}]} <class 'dict'>
        # out:{'INPUT': [{'array_name': 'A', 'distance': ((0, 1), (0, 2), (0, 5)), 'mix_in': 'num_val', 'optimize': True, 'left_side_index': (0, 0, 0)}, {'array_name': 'B', 'distance': ((0, -5), (0, -5), (0, -4)), 'mix_in': 'num_val', 'optimize': True, 'left_side_index': (0, 0, 0)}]} * <class 'dict'>

        """
        Check if left_side_index and distances are correct, parse indexes, check if optimization is possible.
        :arg all_dependencies: not parsed dependencies
        :return dependencies with parsed distances
        """
        for dependency_name, arrays in all_dependencies.items():
            for array in arrays:
                array_name = array['array_name']
                try:
                    all_arrays[array_name]
                except KeyError:
                    error = f'Array "{array_name}" does not exist'
                    raise TypeError(error)

                flip = random.choice(('-1', '+1'))
                tmp_distance = []

                deps_to_parse = re.findall(r'\(.*?\)', array['distance'])
                distances = []
                for dep in deps_to_parse:
                    distances.append(ParseInput.parse_indexes(dep, distances_vars))

                # if at least one distance consists of 0, it can't be optimized
                optimize = True
                for dist in distances:
                    filtered_dist = list(filter(lambda x: x == 0, dist))
                    if len(filtered_dist) == len(dist):
                        optimize = False
                array['optimize'] = optimize

                # parse left_side_index
                if 'left_side_index' in array:
                    left_side_index = ParseInput.parse_indexes(array['left_side_index'], distances_vars)
                else:
                    left_side_index = tuple(0 for _ in range(0, len(distances[0])))
                array['left_side_index'] = left_side_index

                # check if left_side_index has the same size as array
                if not len(all_arrays[array_name]) == len(left_side_index):
                    error = f'Array {array_name} has wrong left side index'
                    raise TypeError(error)

                # check if distance has the same size as array
                if not len(list(filter(lambda x: len(x) == len(all_arrays[array_name]), distances))) == len(
                        distances):
                    error = f'Array {array_name} has wrong distance size in dependency'
                    raise TypeError(error)

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
        return all_dependencies

    @staticmethod
    def parse_indexes(tuple_to_parse: str, distances_vars):  # -> Tuple[int]
        """
        :param tuple_to_parse: (0,5,3,) || (1,5,5,) as strings
        :return: (0,5,3,) || (1,5,5,) as tuples of ints
        """
        """
        Check if it is a positive int or variable from 'distances', otherwise throws exception.
        :arg tuple_to_parse: tuple to parse from json with 'left_side_index' or 'distance'
        :return parsed tuple
        """
        parsed_indexes = []
        tuple_to_parse = tuple_to_parse.replace(" ", "")[1:-2]
        tuple_to_parse = tuple_to_parse.split(',')
        for index in tuple_to_parse:
            if re.match(r'(\d+)|(-\d+)', index):
                parsed_indexes.append(int(index))
            elif re.match(r'((\d+\.\d*)|(\d*\.\d+)([eE][+-]?\d+)?)', index):
                raise TypeError("Allowed distance is only positive integer")
            elif index in distances_vars:
                if distances_vars[index] >= 0:
                    parsed_indexes.append(distances_vars[index])
                else:
                    raise TypeError("Allowed distance is only positive integer")
            else:
                error = f'There is no variable for distance named "{index}"'
                raise TypeError(error)
        return tuple(parsed_indexes)

    @staticmethod
    def parse_string_array(name_with_dims: str, array_sizes_vars) -> Tuple[str, Tuple[int]]:  # todo this type might not be correct
        # in: A[xA,yA,zA] || C[xC,yC]
        # out: (A, (16,64,16)) || (B,(65536,))
        """From string array in input make a tuple (name, (sizes))"""
        name_with_dims = name_with_dims.replace(" ", "").split('[')
        array_name = name_with_dims[0]
        sizes = name_with_dims[1][:-1].split(',')
        iter = 0
        for size in sizes:
            size.replace(" ", "")
            if re.match(r'(\d+)', size):
                sizes[iter] = int(size)
            elif re.match(r'((-\d+)|(\d+\.\d*)|(\d*\.\d+)([eE][+-]?\d+)?)', size):
                raise TypeError("Allowed sizes for arrays are only positive integer")
            elif size in array_sizes_vars:
                if array_sizes_vars[size] > 0:
                    sizes[iter] = array_sizes_vars[size]
                else:
                    raise TypeError("Allowed array size is only positive integer")
            else:
                error = f'There is no variable for array size named "{size}"'
                raise TypeError(error)
            iter += 1
        sizes = tuple(map(int, sizes))
        return (array_name, sizes)