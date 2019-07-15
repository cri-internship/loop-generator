import uuid

import cgen as c

import random

import numpy as np

MAX_NUMBER_OF_ARRAY = 5
MAX_DIM_SIZE = 2 ** 15
MAX_DIMS = 3
MAX_DEPTH = 3

maths_operations = ['+', '-', '*', '/']
array_init_functions = {1: 'create_one_dim', 2: 'create_two_dim', 3: 'create_three_dim'}
dim_size = random.randint(1, MAX_DIM_SIZE)
loop_nest_depth = random.randint(1, MAX_DEPTH)


def generate_nested_loops(loop_nest_depth, num_of_iters):
    """:arg loop_nest_depth: the loop nest depth
       :arg num_of_iters: number of iterations
       recursively function to create for loop with depth d.
       The most inner loop calls function inner_loop
       :return for loop with depth d"""
    loop_index = generate_loop_index(loop_nest_depth)
    lower_bound = 0
    upper_bound = dim_size
    if loop_nest_depth == 1:
        return print_loop_structure(loop_index, lower_bound, upper_bound, c.Block([c.Statement(generate_calculations(init_arrays()))]))
    else:
        return print_loop_structure(loop_index, lower_bound, upper_bound,
                                    generate_nested_loops(loop_nest_depth - 1, num_of_iters))


def print_loop_structure(loop_index, lower_bound, upper_bound, fun):
    return c.For('int {} = {}'.format(loop_index, lower_bound),
                 '{} < '.format(loop_index)
                 + str(upper_bound),
                 '{}++'.format(loop_index),
                 fun)


def create_nested_loop():
    """calls generate_nested_loops(d, i) and write it to file"""
    num_of_iters = random.randint(1, 10)
    with open('src/feature1.c', 'a+') as file:
        file.write('\n\n')
        for line in str(generate_nested_loops(loop_nest_depth, num_of_iters)).splitlines():
            file.write('\t{}\n'.format(line))


def generate_loop_index(loop_level):
    first_iterator = 'a'
    calculated_iterator = chr(ord(first_iterator) + loop_level - 1)
    return calculated_iterator


def generate_array_index(array_id):  # up to 26 letters
    first_iterator = 'A'
    calculated_index = chr(ord(first_iterator) + array_id - 1)
    return calculated_index


def generate_file_name(feature_id):
    unique_identifier = uuid.uuid4()
    file_name = str(feature_id) + " " + str(unique_identifier)
    return file_name


def init_arrays():
    """Generate random amount of arrays and write its initialization to file
    :return dict of array name and dims size"""
    number_of_arrays = random.randint(1, MAX_NUMBER_OF_ARRAY)
    dict_of_arrays = {}
    result_array = [dim_size for _ in range(loop_nest_depth)]
    write_array_to_file('result', result_array)
    for i in range(number_of_arrays):
        dim = generate_array_dimensions()
        index = generate_array_index(i + 1)
        write_array_to_file(index, dim)
        dict_of_arrays[index] = dim
    return dict_of_arrays


def write_array_to_file(array_name, array_size):
    """Write declaration and calling functions to init arrays to file"""
    init_array = c.Statement('\n\tfloat {}{} = {}({})'.format('*' * len(array_size), array_name,
                                                              array_init_functions[len(array_size)],
                                                              str(array_size)[1:-1]))
    with open('src/feature1.c', 'a+') as file:
        file.write(str(init_array))


def generate_array_dimensions():
    """:return: array of random dimension sizes"""
    number_of_dimensions = random.randint(1, MAX_DIMS)
    sizes_of_dimensions = []
    for i in range(number_of_dimensions):
        sizes_of_dimensions.append(dim_size)

    return sizes_of_dimensions


def generate_calculations(arrays_dict):  # todo randomize the parameters
    num_of_calculations = random.randint(0, 14)
    tabl = ''
    for i in range(1, loop_nest_depth + 1):
        tabl= '['+generate_loop_index(i) + ']' + tabl
    print(tabl)
    calculations = "result" + tabl + ' = '
    for i in range(num_of_calculations + 2):
        coin_flip = random.randint(0, 1)
        if coin_flip == 0:
            array_index, array_dims = random.choice(list(arrays_dict.items()))
            number_of_dims = len(array_dims)
            calculations += array_index
            for j in range(number_of_dims):
                rand_parameter = random.randint(0, loop_nest_depth - 1)
                array_id = generate_loop_index(rand_parameter+1)
                calculations += '[' + str(array_id) + ']'  # random array value
        else:
            calculations += str(random.random())  # random scalar

        if not (i == num_of_calculations + 1):
            calculations += random.choice(maths_operations)  # random operator
    return calculations


if __name__ == '__main__':
    pass
