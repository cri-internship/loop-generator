import json
import loops_gen as lg

# check if sizes are the same
import random

unique_arrays_write = {}
unique_arrays_read = {}


def flow_dependency(array_name):
    result = f'{array_name}={do_random(unique_arrays_read)}\n' \
             f'{gen_random_stmt_write()}={array_name}'
    return result


def anti_dependency(array_name):
    result = f'{gen_random_stmt_write()}={array_name}\n' \
             f'{array_name}={do_random(unique_arrays_read)}'
    return result


def output_dependency(array_name):
    result = f'{array_name}={do_random(unique_arrays_read)}\n' \
             f'{array_name}={do_random(unique_arrays_read)}'
    return result


def input_dependency(array_name):
    result = f'{gen_random_stmt_write()}={array_name}\n' \
             f'{gen_random_stmt_write()}={array_name}'
    return result


def gen_random_stmt_write():
    if unique_arrays_write['unused']:
        el = random.choice(list(unique_arrays_write['unused']))
        unique_arrays_write['unused'].remove(el)
        unique_arrays_write['used'].append(el)
    else:
        el = random.choice(list(unique_arrays_write['used']))
    return parse_array(el)


def parse_array(name_with_dims):
    name_with_dims = name_with_dims.split('[')
    array_name = name_with_dims[0]
    sizes = name_with_dims[1][:-1].split(',')
    sizes = list(map(int, sizes))
    return (array_name, sizes)


def do_random(arg):
    pass


def parse_input():
    with open('input.json', 'r') as file:
        data = json.load(file)
        data = data[0]
        global loop_nest_level, unique_arrays_write, unique_arrays_read, dependencies
        loop_nest_level = data['loop_nest_level']
        unique_arrays_write['unused'] = data['unique_arrays_write']
        unique_arrays_write['used'] = []
        unique_arrays_read['unused'] = data['unique_arrays_read']
        unique_arrays_read['used'] = []
        dependencies = data['dependencies']


if __name__ == '__main__':
    parse_input()
    # print(loop_nest_level)
    # print(unique_arrays_write)
    # print(unique_arrays_read)
    # print(dependencies)
    # print(unique_arrays_write)
    # print(unique_arrays_read)
    print(input_dependency("A[i]"))
    # print(unique_arrays_write)
    # print(unique_arrays_read)
    print(flow_dependency("A[i]"))
    # print(unique_arrays_write)
    # print(unique_arrays_read)
    # print(lg.generate_calculations(unique_arrays_read))
