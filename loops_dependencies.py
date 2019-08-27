import ast
import json
import math
import random

import cgen as c

import loops_gen_random as lgr

result_c_file = 'src/feature1.c'
input_file = 'input/input.json'
dependency_function = {'FLOW': (lambda dest, source: flow_dependency(dest, source)),
                       'ANTI': (lambda dest, source: anti_dependency(dest, source)),
                       'OUTPUT': (lambda dest, source: output_dependency(dest, source)),
                       'INPUT': (lambda dest, source: input_dependency(dest, source))}

unique_arrays_write = {"used": set(), "unused": set()}
unique_arrays_read = {"used": set(), "unused": set()}

rand_num_of_calculations = [2, 3, 4, 5, 6, 7, 8, 9]  # random.randint(2, 10)
coin_flip_possibilities = [0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7]


def flow_dependency(dest_array_name, source_array_name):
    result = f'{dest_array_name}={gen_calc_for_read(random.choice(rand_num_of_calculations))[1:]};\n' + loop_nest_level * '  ' + \
             f'{gen_random_stmt(unique_arrays_write)}={source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations))}'
    return result


def anti_dependency(dest_array_name, source_array_name):
    result = f'{gen_random_stmt(unique_arrays_write)}={source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations))};\n' + \
             loop_nest_level * '  ' + f'{dest_array_name}={gen_calc_for_read(random.choice(rand_num_of_calculations))[1:]}'
    return result


def output_dependency(dest_array_name, source_array_name):
    result = f'{dest_array_name}={gen_calc_for_read(random.choice(rand_num_of_calculations))[1:]};\n' + \
             loop_nest_level * '  ' + f'{dest_array_name}={gen_calc_for_read(random.choice(rand_num_of_calculations))[1:]}'
    return result


def input_dependency(dest_array_name, source_array_name):
    result = f'{gen_random_stmt(unique_arrays_write)}={source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations))};\n' + \
             loop_nest_level * '  ' + f'{gen_random_stmt(unique_arrays_write)}={source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations))}'
    return result


def gen_random_stmt(unique_arrays):
    """If there are any unused arrays, get one, other way choose randomly from used.
    Add indexes to array(less than loops nest depth)
    """
    if unique_arrays['unused']:
        el = random.sample(unique_arrays['unused'], 1)[0]
        unique_arrays['unused'].remove(el)
        unique_arrays['used'].add(el)
    else:
        el = random.sample(unique_arrays['used'], 1)[0]
    curr = el[0]
    for size in range(len(el[1])):
        curr += f'[{lgr.generate_loop_index(size % loop_nest_level)}]'
    return curr


def parse_string_array(name_with_dims):
    """From string array in input make a tuple (name, (sizes))"""
    name_with_dims = name_with_dims.split('[')
    array_name = name_with_dims[0]
    sizes = name_with_dims[1][:-1].split(',')
    iter = 0
    for size in sizes:
        sizes[iter] = array_sizes[size]
        iter += 1
    sizes = tuple(map(int, sizes))
    return (array_name, sizes)


def gen_calc_for_read(num_of_calculations):
    stmt = ""
    arrays = generate_arrays_with_indexes(num_of_calculations)
    operators = generate_operators(num_of_calculations)
    for i in range(num_of_calculations):
        stmt += operators[i]
        stmt += str(arrays[i])
    return stmt


def generate_arrays_with_indexes(num_of_calculations):
    gen_arr = generate_arrays_helper([], num_of_calculations)
    global coin_flip
    coin_flip = random.choice(coin_flip_possibilities)
    if coin_flip > 0.5:
        scalar_position_in_arr = random.randrange(0, len(gen_arr))
        gen_arr.append(gen_arr[scalar_position_in_arr])
        gen_arr[scalar_position_in_arr] = ('', round(random.random(), 5))
    res = []
    for el in gen_arr:
        curr = el[0]
        if type(el[1]) is tuple:
            for size in range(len(el[1])):
                curr += f'[{lgr.generate_loop_index(size % loop_nest_level)}]'
        else:
            curr = el[1]
        res.append(curr)
    return res


def generate_arrays_helper(arrays_drew_by_lot, num_of_calculations):
    if num_of_calculations > 0:
        unused_arr_size = len(unique_arrays_read['unused'])
        if unused_arr_size > 0:
            random_sample = random.sample(unique_arrays_read['unused'], min(num_of_calculations, unused_arr_size))
            for el in random_sample:
                unique_arrays_read['unused'].remove(el)
                unique_arrays_read['used'].add(el)
        else:
            random_sample = random.sample(unique_arrays_read['used'],
                                          min(num_of_calculations, len(unique_arrays_read['used'])))
        num_of_calculations -= len(random_sample)
        arrays_drew_by_lot += random_sample
        generate_arrays_helper(arrays_drew_by_lot, num_of_calculations)
    return arrays_drew_by_lot


def generate_operators(num_of_calculations):
    global maths_operations, maths_operations_size
    maths_operations = ['+', '-', '*', '/']
    maths_operations_size = len(maths_operations)
    if coin_flip > 0.5:
        num_of_calculations += 1
    return generate_operators_helper([], num_of_calculations)


def generate_operators_helper(maths_oper_drew_by_lot, num_of_calculations):
    if num_of_calculations > 0:
        tmp = random.sample(maths_operations, min(num_of_calculations, maths_operations_size))
        maths_oper_drew_by_lot += tmp
        num_of_calculations -= len(tmp)
        generate_operators_helper(maths_oper_drew_by_lot, num_of_calculations)
    return maths_oper_drew_by_lot


def parse_input():
    """Parse input, init global variables, call validate sizes for arrays. Put all arrays to 'unused'"""
    with open(input_file, 'r') as file:
        data = json.load(file)
        data = data[0]
        global loop_nest_level, unique_arrays_write, unique_arrays_read, dependencies, all_arrays, array_sizes, dista
        loop_nest_level = data['loop_nest_level']
        unparsed_arrays_write = data['unique_arrays_write']
        unparsed_arrays_read = data['unique_arrays_read']
        array_sizes = data['array_sizes']
        dista = data['distances']
        for arr in unparsed_arrays_write:
            unique_arrays_write['unused'].add(parse_string_array(arr))
        for arr in unparsed_arrays_read:
            unique_arrays_read['unused'].add(parse_string_array(arr))
        dependencies = parse_dependencies(data['dependencies'])
        global all_arrays
        all_arrays = validate_array_sizes()
        validate_dependencies()


def parse_dependencies(dependencies):
    """
    CHANGE FROM STRING TO ARRAY OF DISTANCES
    """
    for dependency_name, dependency in dependencies.items():
        for array_name, distance in dependency.items():
            ret = []
            distance.replace(" ", "")
            distance = distance[1:-1]
            new_dist = ""
            for d in distance:
                if d is ',':
                    ret.append(dista[new_dist])
                    new_dist = ""
                else:
                    new_dist += d
            dependency[array_name] = tuple(ret) # todo a change was made here

    for dependency_name, dependency in dependencies.items():
        for array_name, distances in dependency.items():
            for index in range(len(distances)):
                distance = distances[index]
                if distance == 0:
                    distance = (0, 0)
                else:
                    if distance < 0:
                        dest_dist = random.randrange(abs(distance))
                        distance = tuple(map(lambda x: x * -1, -(dest_dist, (abs(distance) - dest_dist))))
                    else:
                        dest_dist = random.randrange(abs(distance))
                        distance = (dest_dist, -(abs(distance) - dest_dist))
                distances = list(distances)
                distances[index] = distance
                distances = tuple(distances)
            dependency[array_name] = distances
    print(dependencies)
    return dependencies


def generate_nested_loops(loop_nest_depth, affine):
    """:arg loop_nest_depth: the loop nest depth
       recursively function to create for loop with depth d.
       The most inner loop run dependencies.
       Choose upper bound by going through each appropriate size of each array.
       :return for loop with depth d
       """
    loop_index = lgr.generate_loop_index(loop_nest_depth - 1)
    lower_bound = 0
    upper_bound = float("inf")
    for array_name, array_size in all_arrays.items():
        array_length = len(array_size)
        for index in range(loop_nest_depth - 1, array_length, loop_nest_level):
            if array_size[index] < upper_bound:
                upper_bound = array_size[index]
    if loop_nest_depth == 1:
        return print_loop_structure(loop_index, lower_bound, upper_bound, affine,
                                    run_dependencies())
    else:
        return print_loop_structure(loop_index, lower_bound, upper_bound, affine,
                                    generate_nested_loops(loop_nest_depth - 1, [affine[0][1:], affine[1][1:]]))


def print_loop_structure(loop_index, lower_bound, upper_bound, affine, fun):
    scalar_part = ''
    curr_val = affine[1][0]
    if curr_val > 0:
        scalar_part = ' - '
    elif curr_val < 0:
        scalar_part = ' + '
    scalar_part += str(abs(curr_val))
    return c.For('int {} = {}'.format(loop_index, affine[0][0]),
                 '{} < '.format(loop_index)
                 # + str(upper_bound)
                 + str(affine[1][0]),
                 '{}++'.format(loop_index),
                 fun)


def create_nested_loop():
    """Calls generate_nested_loops(d, i) and write it to file"""
    with open(result_c_file, 'a+') as file:
        file.write('\n\n')
        for line in str(
                generate_nested_loops(loop_nest_level, adjust_bounds(global_bounds()))).splitlines():  # todo: rewrite
            file.write('\t{}\n'.format(line))


def init_arrays(file=result_c_file):
    """Init all arrays"""
    for array_name, array_size in all_arrays.items():
        lgr.write_init_array(array_name, array_size, file)


def run_dependencies():
    """Go throw all dependencies, create each dependency with prepared functions and put it into c.Statement
    :return c.Block containing all dependencies with c.Statement
    """
    block_with_dependencies = []
    for dependency, arrays in dependencies.items():  # {'FLOW': {'A': ((0, 1),), 'C': ((0, 0), (1, 1), (-1, -1))}, 'ANTI': {'B': ((0, 0), (0, -1))}, 'OUTPUT': {}, 'INPUT': {}}
        if arrays:
            for array_name, distances in arrays.items():  # {'A': ((0, 1),)}
                for arr_name, arr_size in all_arrays.items():  # {('B', (100, 66)), ('C', (55, 46, 100)), ('A', (10,))}
                    if array_name == arr_name:
                        dest_array = array_name
                        src_array = array_name
                        for index in range(len(arr_size)):
                            distance = distances[index]
                            if distance[0] == 0:
                                dest_dist = ''
                            elif str(distance[0])[0] == '-':
                                dest_dist = str(distance[0])
                            else:
                                dest_dist = '+' + str(distance[0])
                            if distance[1] == 0:
                                src_dist = ''
                            elif str(distance[1])[0] == '-':
                                src_dist = str(distance[1])
                            else:
                                src_dist = '+' + str(distance[1])
                            dest_array += f'[{lgr.generate_loop_index(index % loop_nest_level)}{dest_dist}]'
                            src_array += f'[{lgr.generate_loop_index(index % loop_nest_level)}{src_dist}]'
                        block_with_dependencies.append(
                            c.Statement(dependency_function[dependency](dest_array, src_array)))
    return c.Block(block_with_dependencies)


def validate_array_sizes():
    """Make union of read and write arrays, check with the dict if the sizes for similar arrays are the same,
    if not raise an error
    :return set with all arrays
    """
    uni = unique_arrays_write['unused'].union(unique_arrays_read['unused'])
    hash_dict = {}
    for el in uni:
        if el[0] in hash_dict and el[1] != hash_dict[el[0]]:
            error = f'Arrays {el[0]} have different sizes'
            raise TypeError(error)
        else:
            hash_dict[el[0]] = el[1]
    return hash_dict


def validate_dependencies():
    for _, arrays in dependencies.items():
        for array_name, distance in arrays.items():
            if len(all_arrays[array_name]) == len(distance):
                pass
            else:
                error = f'Array {array_name} has wrong dependency'
                raise TypeError(error)


def adjust_bounds(affine_fcts):
    max_tuple_size = 0
    for tupl in affine_fcts:
        max_tuple_size = max(max_tuple_size, len(affine_fcts[tupl]))

    lower_bounds = [-math.inf] * max_tuple_size
    upper_bounds = [math.inf] * max_tuple_size

    for tupl in affine_fcts:
        index = -1
        for t in affine_fcts[tupl]:
            index += 1
            lower_bounds[index] = max(lower_bounds[index], -1 * int(t[0]))
            lower_bounds[index] = max(lower_bounds[index], -1 * int(t[1]))
            upper_bounds[index] = min(upper_bounds[index], all_arrays[tupl][index] - int(t[0]))
            upper_bounds[index] = min(upper_bounds[index], all_arrays[tupl][index] - int(t[1]))

        lower_bounds[index] = max(lower_bounds[index], 0) #todo in most cases 0, but try to find a way to calculate it
        upper_bounds[index] = min(upper_bounds[index], all_arrays[tupl][index])
    return [lower_bounds[::-1], upper_bounds[::-1]]


def global_bounds():
    global concat_depen
    concat_depen = {}
    for dependency, arrays in dependencies.items():
        if arrays:
            for array_name, distances in arrays.items():
                concat_depen.update({array_name: distances})
    return concat_depen


if __name__ == '__main__':
    parse_input()