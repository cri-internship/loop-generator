import json


# check if sizes are the same
import random


def flow_dependency(array_name):
    result = f'{array_name}={do_random()}\n' \
             f'{do_random()}={array_name}'
    return result


def anti_dependency(array_name):
    result = f'{do_random()}={array_name}\n' \
             f'{array_name}={do_random()}'
    return result


def output_dependency(array_name):
    result = f'{array_name}={do_random()}\n' \
             f'{array_name}={do_random()}'
    return result


def input_dependency(array_name):
    result = f'{do_random()}={array_name}\n' \
             f'{do_random()}={array_name}'
    return result


def do_random(write_or_read):
    print(write_or_read)
    if False in write_or_read.values():
        print(dict(filter(lambda key, elem: elem == False, write_or_read.items())))
    else:
        print(random.choice(list(write_or_read.keys())))
    print(random.choice(list(write_or_read.keys())))



def parse_input():
    with open('input.json', 'r') as file:
        data = json.load(file)
        data = data[0]
        global loop_nest_level, unique_arrays_write, unique_arrays_read, dependencies
        loop_nest_level = data['loop_nest_level']
        unique_arrays_write = {i: False for i in data['unique_arrays_write']}
        unique_arrays_read = {i: False for i in data['unique_arrays_read']}
        dependencies = data['dependencies']


if __name__ == '__main__':
    parse_input()
    print(loop_nest_level)
    print(unique_arrays_write)
    print(unique_arrays_read)
    print(dependencies)
    do_random(unique_arrays_write)

