import json
import loops_gen as lg
import cgen as c

# check if sizes are the same
import random

file_name = 'src/feature1.c'
dependency_function = {'F': (lambda name: flow_dependency(name)), 'A': (lambda name: anti_dependency(name)),
                'O': (lambda name: output_dependency(name)), 'I': (lambda name: input_dependency(name))}

unique_arrays_write = {"used": set(), "unused": set()}
unique_arrays_read = {"used": set(), "unused": set()}


def flow_dependency(array_name):
    result = f'{array_name}={gen_calc_for_read()[1:]};\n' \
             f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read()}'
    return result


def anti_dependency(array_name):
    result = f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read()};\n' \
             f'{array_name}={gen_calc_for_read()[1:]}'
    return result


def output_dependency(array_name):
    result = f'{array_name}={gen_calc_for_read()[1:]};\n' \
             f'{array_name}={gen_calc_for_read()[1:]}'
    return result


def input_dependency(array_name):
    result = f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read()};\n' \
             f'{gen_random_stmt(unique_arrays_write)}={array_name}{gen_calc_for_read()}'
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
        curr += f'[{lg.generate_loop_index(size)}]'
    return curr


def parse_string_array(name_with_dims):
    name_with_dims = name_with_dims.split('[')
    array_name = name_with_dims[0]
    sizes = name_with_dims[1][:-1].split(',')
    sizes = tuple(map(int, sizes))
    return (array_name, sizes)


def gen_calc_for_read():
    maths_operations = ['+', '-', '*', '/']
    num_of_calculations = random.randint(2, 7)
    stmt = ""
    for i in range(num_of_calculations):
        stmt += random.choice(maths_operations) + gen_random_stmt(unique_arrays_read)
    stmt += random.choice(maths_operations) + str(random.random())
    return stmt


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
        all_arrays = set.union(unique_arrays_read['unused'], unique_arrays_write['unused'])


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
                                    c.Block([c.Statement(input_dependency("A[i]"))]))
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
    for dependency, arrays in dependencies.items():
        if arrays:
            for array in arrays:
                yield dependency_function[dependency](array)



if __name__ == '__main__':
    parse_input()
    init_arrays()
    print(dependencies)

    # print(gen_calc_for_read(unique_arrays_read))
    # print(loop_nest_level)
    # print(unique_arrays_write)
    # print(dependencies)
    # print(unique_arrays_write)
    # print(unique_arrays_read)
    # print(input_dependency("A[i]"))
    # print(unique_arrays_write)
    # print(unique_arrays_read)
    # print(flow_dependency("A[i]"))
    # print(anti_dependency("A[i]"))
    # print(output_dependency("A[i]"))
# print(input_dependency("A[i]"))
# print(unique_arrays_write)
# print(unique_arrays_read)
# print(lg.generate_calculations(unique_arrays_read))
