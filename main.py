import json

# check if sizes are the same
import random

unique_arrays_write = {}
unique_arrays_read = {}


def flow_dependency(array_name):
    result = f'{array_name}={do_random(unique_arrays_read)}\n' \
             f'{do_random(unique_arrays_write)}={array_name}'
    return result


def anti_dependency(array_name):
    result = f'{do_random(unique_arrays_write)}={array_name}\n' \
             f'{array_name}={do_random(unique_arrays_read)}'
    return result


def output_dependency(array_name):
    result = f'{array_name}={do_random(unique_arrays_read)}\n' \
             f'{array_name}={do_random(unique_arrays_read)}'
    return result


def input_dependency(array_name):
    result = f'{do_random(unique_arrays_write)}={array_name}\n' \
             f'{do_random(unique_arrays_write)}={array_name}'
    return result


def do_random(write_or_read):
    if write_or_read['unused']:
        el = random.choice(list(write_or_read['unused']))
        write_or_read['unused'].remove(el)
        write_or_read['used'].append(el)
        return el
    else:
        return random.choice(list(write_or_read['used']))


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
    print(unique_arrays_write)
    print(unique_arrays_read)
    # print(dependencies)
    # print(unique_arrays_write)
    # print(unique_arrays_read)
    print(input_dependency("A[i]"))
    print(unique_arrays_write)
    print(unique_arrays_read)
    print(flow_dependency("A[i]"))
    print(unique_arrays_write)
    print(unique_arrays_read)
    # print(lg.generate_calculations(unique_arrays_read))
