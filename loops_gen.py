import uuid
import cgen as c
import random

MAX_NUMBER_OF_ARRAY = 5
MAX_DIM_SIZE = 23  # 2 ** 15
MAX_DIMS = 3
MAX_DEPTH = 3

maths_operations = ['+', '-', '*', '/']
array_init_functions = {1: 'create_one_dim', 2: 'create_two_dim', 3: 'create_three_dim'}
dim_size = random.randint(1, MAX_DIM_SIZE)
loop_nest_depth = random.randint(1, MAX_DEPTH)
file_name = 'src/feature1.c'


def generate_nested_loops(loop_nest_depth):
    """:arg loop_nest_depth: the loop nest depth
       recursively function to create for loop with depth d.
       The most inner loop calls generate_calculations
       :return for loop with depth d
       """
    loop_index = generate_loop_index(loop_nest_depth - 1)
    lower_bound = 0
    upper_bound = dim_size
    if loop_nest_depth == 1:
        return print_loop_structure(loop_index, lower_bound, upper_bound,
                                    c.Block([c.Statement(generate_calculations(init_arrays()))]))
    else:
        return print_loop_structure(loop_index, lower_bound, upper_bound,
                                    generate_nested_loops(loop_nest_depth - 1))


def print_loop_structure(loop_index, lower_bound, upper_bound, fun):
    return c.For('int {} = {}'.format(loop_index, lower_bound),
                 '{} < '.format(loop_index)
                 + str(upper_bound),
                 '{}++'.format(loop_index),
                 fun)


def create_nested_loop():
    """calls generate_nested_loops(d, i) and write it to file"""
    with open(file_name, 'a+') as file:
        file.write('\n\n')
        for line in str(generate_nested_loops(loop_nest_depth)).splitlines():
            file.write('\t{}\n'.format(line))


def generate_loop_index(loop_level):
    first_iterator = 'a'
    calculated_iterator = chr(ord(first_iterator) + loop_level % 26)
    return calculated_iterator


def generate_array_name(array_id):  # up to 26 letters
    first_iterator = 'A'
    calculated_index = chr(ord(first_iterator) + array_id % 26)
    return calculated_index


def generate_file_name(feature_id):
    unique_identifier = uuid.uuid4()
    file_name = str(feature_id) + " " + str(unique_identifier)
    return file_name


def init_arrays(file=file_name):
    """Generate random amount of arrays and write its initialization to file
    :return dict of array name and dims size
    """
    number_of_arrays = random.randint(1, MAX_NUMBER_OF_ARRAY)
    dict_of_arrays = {}
    result_array_dims = [dim_size for _ in range(loop_nest_depth)]
    write_init_array('result', result_array_dims, file)
    for i in range(number_of_arrays):
        dims = generate_array_dimensions()
        index = generate_array_name(i)
        write_init_array(index, dims, file)
        dict_of_arrays[index] = dims
    return dict_of_arrays


def write_init_array(array_name, array_sizes, file):
    """Write declaration and calling functions to init arrays to file"""
    if type(array_sizes) == tuple and len(array_sizes) == 1:
        init_array = c.Statement('\n\tfloat {}{} = {}({})'.format('*' * len(array_sizes), array_name,
                                                                  array_init_functions[len(array_sizes)],
                                                                  str(array_sizes)[1:-2]))
    else:
        init_array = c.Statement('\n\tfloat {}{} = {}({})'.format('*' * len(array_sizes), array_name,
                                                                  array_init_functions[len(array_sizes)],
                                                                  str(array_sizes)[1:-1]))
    with open(file, 'a+') as file:
        file.write(str(init_array))


def generate_array_dimensions():
    """:return: array of random dimension sizes"""
    number_of_dimensions = random.randint(1, MAX_DIMS)
    sizes_of_dimensions = [dim_size for _ in range(number_of_dimensions)]
    return sizes_of_dimensions


def generate_calculations(arrays_dict):  # todo randomize the parameters
    num_of_calculations = random.randint(2, 16)
    for i in range(loop_nest_depth):
        try:
            result_dims = '[' + generate_loop_index(i) + ']' + result_dims
        except NameError:
            result_dims = '[' + generate_loop_index(i) + ']'
    calculations = "result" + result_dims + ' = '
    for i in range(num_of_calculations):
        # coin_flip = random.randint(0, 1)
        # if coin_flip == 0:
        array_index, array_dims = random.choice(list(arrays_dict.items()))
        number_of_dims = len(array_dims)
        calculations += array_index
        for j in range(number_of_dims):
            rand_parameter = random.randint(0, loop_nest_depth - 1)
            array_id = generate_loop_index(rand_parameter)
            calculations += '[' + str(array_id) + ']'  # random array value
        calculations += random.choice(maths_operations)  # random operator
    calculations += str(random.random())  # random scalar

    return calculations[:-1]


if __name__ == '__main__':
    print(generate_calculations({'A': [12], 'B': [12, 12], 'C': [12, 12], 'D': [12, 12, 12]}))
