import uuid

import cgen as c

import random

import numpy as np

maths_operations = ['+', '-', '*', '/']  # random.choice(maths_operations.values())


def generate_nested_loops(d, i):
    """:arg d: the loop nest depth
       :arg i: number of iterations
       recursively function to create for loop with depth d.
       The most inner loop calls function inner_loop
       :return for loop with depth d"""
    assert (d, i) > (0, 0)  # todo move to the RANDOM generator
    loop_index = generate_loop_index(d)
    lower_bound = 0
    upper_bound = random.randint(lower_bound + 1, 2 ** 15)
    inner_stmt = c.Block([c.Statement('printf("hello world\\n")')])

    if d == 1:
        return print_loop_structure(loop_index, lower_bound, upper_bound, inner_stmt)
    else:
        return print_loop_structure(loop_index, lower_bound, upper_bound, generate_nested_loops(d - 1, i))


def print_loop_structure(loop_index, lower_bound, upper_bound, fun):
    return c.For('int {} = {}'.format(loop_index, lower_bound),
                 '{} < '.format(loop_index)
                 + str(upper_bound),
                 '{}++'.format(loop_index),
                 fun)


def depth_loop(d, i):
    """:arg d: loop nest depth
       :arg i: number of iterations
       calls generate_nested_loops(d, i) and write it to file"""
    with open('src/feature1.c', 'a+') as file:
        for line in str(generate_nested_loops(d, i)).splitlines():
            file.write('\t' + line + '\n')


def generate_loop_index(loop_level):
    first_iterator = 'a'
    calculated_iterator = chr(ord(first_iterator) + loop_level - 1)
    return calculated_iterator


def generate_array_index(array_id):  # up to 26 letters
    first_iterator = 'A'
    calculated_index = chr(ord(first_iterator) + array_id)
    return calculated_index


def generate_file_name(feature_id):
    unique_identifier = uuid.uuid4()
    file_name = str(feature_id) + " " + str(unique_identifier)
    return file_name


def generate_calculations():
    number_of_arrays = random.randint(1, 5)
    for i in range(number_of_arrays):
        write_array_to_file(generate_array_index(i), generate_array_dimensions())


def write_array_to_file(array_name, array_size):
    init_array = c.Statement('\n\tfloat {}{}'.format(array_name, create_array_brackets(array_size)))
    with open('src/feature1.c', 'a+') as file:
        file.write(str(init_array))


def create_array_brackets(array_size):
    s = ''
    for i in array_size:
        s += ('[{}]'.format(i))
    return s


def generate_array_dimensions():
    """amount of dimensions 1 - 3
    max size of each dimension: 1024
    :return: array of dimension sizes"""
    max_dimension_size = 1024
    number_of_dimensions = random.randint(1, 3)
    sizes_of_dimensions = []
    for i in range(number_of_dimensions):
        sizes_of_dimensions.append(random.randint(1, max_dimension_size))
    return sizes_of_dimensions


""" DYNAMICAL ARRAYS IN C  

2DIM:
float (*a)[y] = malloc(sizeof(float[x][y]));
free(a);

3DIM
float (*a)[y][z] = malloc(sizeof(float[x][y][z]));
free(a)

"""

if __name__ == '__main__':
    generate_calculations()
