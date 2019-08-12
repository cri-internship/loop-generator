import json
# check if sizes are the same
import random

import cgen as c

import loops_gen as lg

file_name = 'src/feature1.c'
dependency_function = {'F': (lambda name: flow_dependency(name)), 'A': (lambda name: anti_dependency(name)),
                       'O': (lambda name: output_dependency(name)), 'I': (lambda name: input_dependency(name))}

unique_arrays_write = {"used": set(), "unused": set()}
unique_arrays_read = {"used": set(), "unused": set()}

rand_num_of_calculations = random.randint(2, 10)


def flow_dependency(array_name):
    result = f'{array_name}={gen_calc_for_read(rand_num_of_calculations)[1:]};\n' + loop_nest_level * '  ' + \
             f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read(rand_num_of_calculations)}'
    return result


def anti_dependency(array_name):
    result = f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read(rand_num_of_calculations)};\n' + \
             loop_nest_level * '  ' + f'{array_name}={gen_calc_for_read(rand_num_of_calculations)[1:]}'
    return result


def output_dependency(array_name):
    result = f'{array_name}={gen_calc_for_read(rand_num_of_calculations)[1:]};\n' + loop_nest_level * '  ' + \
             f'{array_name}={gen_calc_for_read(rand_num_of_calculations)[1:]}'
    return result


def input_dependency(array_name):
    result = f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read(rand_num_of_calculations)};\n' + \
             loop_nest_level * '  ' + f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read(rand_num_of_calculations)}'
    return result


def gen_random_stmt(unique_arrays):
    if unique_arrays['unused']:
        el = random.sample(unique_arrays['unused'], 1)[0]
        unique_arrays['unused'].remove(el)
        unique_arrays['used'].add(el)
    else:
        el = random.sample(unique_arrays['used'], 1)[0]
    curr = el[0]
    for size in range(len(el[1])):
        curr += f'[{lg.generate_loop_index(size % loop_nest_level)}]'
    return curr


def parse_string_array(name_with_dims):
    name_with_dims = name_with_dims.split('[')
    array_name = name_with_dims[0]
    sizes = name_with_dims[1][:-1].split(',')
    sizes = tuple(map(int, sizes))
    return (array_name, sizes)


def gen_calc_for_read(num_of_calculations):
    stmt = ""
    operators = generate_operators(num_of_calculations)
    arrays = generate_arrays_with_indexes(num_of_calculations)
    for i in range(num_of_calculations):
        stmt += operators[i]
        stmt += arrays[i]
    return stmt


def generate_arrays_with_indexes(num_of_calculations):
    gen_arr = generate_arrays_helper([], num_of_calculations)
    res = []
    for el in gen_arr:
        curr = el[0]
        for size in range(len(el[1])):
            curr += f'[{lg.generate_loop_index(size % loop_nest_level)}]'
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
    return generate_operators_helper([], num_of_calculations)


def generate_operators_helper(maths_oper_drew_by_lot, num_of_calculations):
    if num_of_calculations > 0:
        maths_oper_drew_by_lot += random.sample(maths_operations, min(num_of_calculations, maths_operations_size))
        num_of_calculations -= len(maths_oper_drew_by_lot)
        generate_operators_helper(maths_oper_drew_by_lot, num_of_calculations)

    return maths_oper_drew_by_lot


def parse_input():
    with open('input.json', 'r') as file:
        data = json.load(file)
        data = data[0]
        global loop_nest_level, unique_arrays_write, unique_arrays_read, dependencies, all_arrays
        loop_nest_level = data['loop_nest_level']
        unparsed_arrays_write = data['unique_arrays_write']
        unparsed_arrays_read = data['unique_arrays_read']
        for arr in unparsed_arrays_write:
            unique_arrays_write['unused'].add(parse_string_array(arr))
        for arr in unparsed_arrays_read:
            unique_arrays_read['unused'].add(parse_string_array(arr))
        dependencies = data['dependencies']
        all_arrays = validate_array_sizes()


def generate_nested_loops(loop_nest_depth):
    """:arg loop_nest_depth: the loop nest depth
       recursively function to create for loop with depth d.
       The most inner loop calls function inner_loop
       :return for loop with depth d"""
    loop_index = lg.generate_loop_index(loop_nest_depth - 1)
    lower_bound = 0
    upper_bound = 10  # TO DO
    if loop_nest_depth == 1:
        return print_loop_structure(loop_index, lower_bound, upper_bound,
                                    run_dependencies())
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
        for line in str(generate_nested_loops(loop_nest_level)).splitlines():
            file.write('\t{}\n'.format(line))


def init_arrays(file=file_name):
    for arr in all_arrays:
        lg.write_init_array(arr[0], arr[1], file)


def run_dependencies():
    block_with_dependencies = []
    for dependency, arrays in dependencies.items():
        if arrays:
            for array_name in arrays:
                for each_array in all_arrays:
                    if array_name == each_array[0]:
                        array = array_name
                        for index in range(len(each_array[1])):
                            array += f'[{lg.generate_loop_index(index % loop_nest_level)}]'
                        block_with_dependencies.append(c.Statement(dependency_function[dependency](array)))
    return c.Block(block_with_dependencies)


def validate_array_sizes():
    uni = unique_arrays_write['unused'].union(unique_arrays_read[
                                                  'unused'])
    hash_dict = {}
    for el in uni:
        if el[0] in hash_dict and el[1] != hash_dict[el[0]]:
            error = f'Arrays {el[0]} have different sizes'
            raise TypeError(error)
        else:
            hash_dict[el[0]] = el[1]
    return uni


if __name__ == '__main__':
    parse_input()
    init_arrays()
