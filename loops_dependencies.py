import json
import math
import random
import string
import re

import cgen as c

import loops_gen_random as lgr

result_c_file = 'src/feature1.c'
input_file = 'input/input.json'
dependency_function = {'FLOW': (lambda dest, source, optimize, extra: flow_dependency(dest, source, optimize, extra)),
                       'ANTI': (lambda dest, source, optimize, extra: anti_dependency(dest, source, optimize, extra)),
                       'OUTPUT': (
                           lambda dest, source, optimize, extra: output_dependency(dest, source, optimize, extra)),
                       'INPUT': (lambda dest, source, optimize, extra: input_dependency(dest, source, optimize, extra))}

unique_arrays_write = {"used": set(), "unused": set()}
unique_arrays_read = {"used": set(), "unused": set()}

literal_values_source = {}
literal_values_destination = {}

stmt_counter = 0

maths_operations = ['+', '-', '*', '/']
amount_of_vars = 0


def gen_random_scalar():
    if typ == 'int':
        return random.randint(0, 50)
    else:
        return round(random.random(), 5)


def flow_dependency(dest_array_name, source_array_name, optimize, extra):
    arr_name = dest_array_name.partition('[')[0]
    arr_def = (arr_name, all_arrays[arr_name])
    if extra == 'random':
        result = gen_random_part(dest_array_name, source_array_name, optimize, arr_def)
    else:
        result = gen_scalar_part(dest_array_name, source_array_name, optimize)
    return result


def gen_random_part(dest_array_name, source_array_name, optimize, arr_def):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [
            f'{source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)}']
        # result = gen_based_on_usage_flow(stmt_body)
        if dest_array_name in literal_values_destination.keys() and source_array_name in literal_values_source.keys():
            result = ""
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            populate_values(dest_array_name, source_array_name)
    else:
        stmt_body['destination'] = [dest_array_name,
                                    f'{gen_random_stmt(unique_arrays_write)}']
        stmt_body['source'] = [f'{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)[1:]}',
                               f'{source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)}']
        result = gen_based_on_usage_flow(stmt_body)
    return result


def gen_scalar_part(dest_array_name, source_array_name, optimize):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [f'{source_array_name}{random.choice(maths_operations)}{round(random.random(), 5)}']
        # result = gen_one_line_flow(stmt_body)
        if dest_array_name in literal_values_destination.keys() and source_array_name in literal_values_source.keys():
            result = ""
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            populate_values(dest_array_name, source_array_name)
    else:
        stmt_body['destination'] = [dest_array_name, f'{generate_var("float ")}']
        stmt_body['source'] = [f'{round(random.random(), 5)}',
                               f'{source_array_name}{random.choice(maths_operations)}{round(random.random(), 5)}']
        result = gen_based_on_usage_flow(stmt_body)
    return result


def gen_based_on_usage_flow(stmt_body):
    array = stmt_body['destination'][0]
    if satisfies_flow(array):
        dest_usage = literal_values_destination[array][1]
        source_usage = literal_values_source[array][1]
        if dest_usage <= source_usage:
            result = ""
        else:
            result = gen_full_stmt_flow(stmt_body)
    elif array in literal_values_destination.keys():
        result = gen_one_line_flow(stmt_body, 1)
    else:
        result = gen_full_stmt_flow(stmt_body)
    return result


def satisfies_flow(array):
    return array in literal_values_destination.keys() and array in literal_values_source.keys()


def gen_one_line_flow(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    populate_values(destination, source)
    inc_stmt_counter()
    result = destination + '=' + source
    return result


def gen_full_stmt_flow(stmt_body):
    result = gen_one_line_flow(stmt_body, 0) + ';\n'
    result += add_indent() + gen_one_line_flow(stmt_body, 1)
    return result


def anti_dependency(dest_array_name, source_array_name, optimize, extra):
    arr_name = dest_array_name.partition('[')[0]
    arr_def = (arr_name, all_arrays[arr_name])
    if extra == 'random':
        result = gen_random_part_anti(dest_array_name, source_array_name, optimize, arr_def)
    else:
        result = gen_scalar_part_anti(dest_array_name, source_array_name, optimize)
    return result


def gen_random_part_anti(dest_array_name, source_array_name, optimize, arr_def):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [
            f'{source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)}']
        # result = gen_based_on_usage_flow(stmt_body,0)
        if dest_array_name in literal_values_destination.keys() and source_array_name in literal_values_source.keys():
            result = ""
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            populate_values(stmt_body['destination'][0], stmt_body['source'][0])
    else:
        stmt_body['destination'] = [f'{gen_random_stmt(unique_arrays_write)}',
                                    dest_array_name]
        stmt_body['source'] = [
            f'{source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)}',
            f'{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)[1:]}']
        result = gen_based_on_usage_anti(stmt_body, source_array_name)
    return result


def gen_scalar_part_anti(dest_array_name, source_array_name, optimize):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [f'{source_array_name}{random.choice(maths_operations)}{gen_random_scalar()}']
        if dest_array_name in literal_values_destination.keys() and source_array_name in literal_values_source.keys():
            result = ""
        # result = gen_one_line_flow(stmt_body, 0)
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            populate_values(stmt_body['destination'][0], stmt_body['source'][0])
    else:
        stmt_body['destination'] = [f'{generate_var(typ)}', dest_array_name]
        stmt_body['source'] = [f'{source_array_name}{random.choice(maths_operations)}{gen_random_scalar()}',
                               f'{gen_random_scalar()}']
        result = gen_based_on_usage_anti(stmt_body, source_array_name)
    return result


def gen_based_on_usage_anti(stmt_body, source_array_name):
    array = source_array_name
    if satisfies_anti(array):
        dest_usage = literal_values_destination[array][1]
        source_usage = literal_values_source[array][1]
        if source_usage < dest_usage:
            result = ""
        else:
            result = gen_full_stmt_anti(stmt_body)
    elif array in literal_values_destination.keys():
        result = gen_one_line_anti(stmt_body, 1)
    else:
        result = gen_full_stmt_anti(stmt_body)
    return result


def satisfies_anti(array):
    return array in literal_values_destination.keys() and array in literal_values_source.keys()


def gen_one_line_anti(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    populate_values(destination, source)
    inc_stmt_counter()
    result = destination + '=' + source
    return result


def gen_full_stmt_anti(stmt_body):
    result = gen_one_line_anti(stmt_body, 0) + ';\n'
    result += add_indent() + gen_one_line_anti(stmt_body, 1)
    return result


def output_dependency(dest_array_name, source_array_name, __, extra):
    arr_name = dest_array_name.partition('[')[0]
    arr_def = (arr_name, all_arrays[arr_name])
    stmt_body = {}
    if extra == 'random':
        stmt_body['destination'] = [f'{dest_array_name}', f'{source_array_name}']
        stmt_body['source'] = [f'{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)[1:]}',
                               f'{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)[1:]}']
        result = gen_based_on_usage_output(dest_array_name, stmt_body)
    else:
        stmt_body['destination'] = [f'{dest_array_name}', f'{source_array_name}']
        stmt_body['source'] = [f'{gen_random_scalar()}', f'{gen_random_scalar()}']
        result = gen_based_on_usage_output(dest_array_name, stmt_body)
    return result


def gen_based_on_usage_output(dest_array_name, stmt_body):
    if dest_array_name in literal_values_destination.keys():
        dest_usage = literal_values_destination[dest_array_name][0]
        if dest_usage >= 2:
            result = ""
        elif dest_usage == 1:
            result = gen_stmt_output(stmt_body, 0)
    else:
        result = gen_stmt_output(stmt_body, 0) + ';\n'
        result += add_indent() + gen_stmt_output(stmt_body, 1)
    return result


def gen_stmt_output(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    populate_values(destination, source)
    inc_stmt_counter()
    result = destination + '=' + source
    return result


def input_dependency(dest_array_name, source_array_name, __, extra):
    arr_name = source_array_name.partition('[')[0]
    arr_def = (arr_name, all_arrays[arr_name])
    stmt_body = {}
    if extra == 'random':
        stmt_body['destination'] = [f'{gen_random_stmt(unique_arrays_write)}',
                                    f'{gen_random_stmt(unique_arrays_write)}']
        stmt_body['source'] = [
            f'{dest_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)}',
            f'{source_array_name}{gen_calc_for_read(random.choice(rand_num_of_calculations), arr_def)}']
        result = gen_based_on_usage(source_array_name, arr_def, stmt_body)
    else:
        stmt_body['destination'] = [f'{generate_var(typ)}', f'{generate_var(typ)}']
        stmt_body['source'] = [f'{dest_array_name}{random.choice(maths_operations)}{gen_random_scalar()}',
                               f'{source_array_name}{random.choice(maths_operations)}{gen_random_scalar()}']
        result = gen_based_on_usage(source_array_name, arr_def, stmt_body)
    return result


def gen_based_on_usage(source_array_name, arr_def, stmt_body):
    if source_array_name in literal_values_source.keys():
        source_usage = literal_values_source[source_array_name][0]
        if source_usage >= 2:
            result = ""  # TODO maybe None???
        elif source_usage == 1:
            result = gen_stmt_input(stmt_body, 0)
    else:
        result = gen_stmt_input(stmt_body, 0) + ';\n'
        result += add_indent() + gen_stmt_input(stmt_body, 1)
    return result


def gen_stmt_input(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    populate_values(destination, source)
    result = destination + '=' + source
    inc_stmt_counter()
    return result


def populate_values(destination, source):
    populate_literal_values(literal_values_destination, destination)
    populate_literal_values(literal_values_source, source)


def inc_stmt_counter():
    global stmt_counter
    stmt_counter += 1


def generate_var(type):
    global amount_of_vars
    first_iterator = 'a'
    calculated_iterator = chr(ord(first_iterator) + amount_of_vars % 26)
    random_var = type + " var_" + calculated_iterator
    amount_of_vars += 1
    return random_var


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


def gen_calc_for_read(num_of_calculations, arr_def):
    stmt = ""
    arrays = generate_arrays_with_indexes1(num_of_calculations, arr_def)
    operators = generate_operators(num_of_calculations)
    for i in range(num_of_calculations):
        stmt += operators[i]
        stmt += str(arrays[i])
    return stmt


def generate_arrays_with_indexes1(num_of_calculations, arr_def):
    # temporarily remove the array on which we do dependencies
    tmp_used, tmp_unused = False, False
    if arr_def in unique_arrays_read['unused']:
        tmp_unused = True
        unique_arrays_read['unused'].remove(arr_def)
    if arr_def in unique_arrays_read['used']:
        tmp_used = True
        unique_arrays_read['used'].remove(arr_def)

    gen_arr = generate_arrays_helper1([], num_of_calculations, arr_def)

    if tmp_unused:
        unique_arrays_read['unused'].add(arr_def)
    if tmp_used:
        unique_arrays_read['used'].add(arr_def)

    global coin_flip
    coin_flip = random.random()
    if coin_flip > 0.75:
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


def generate_arrays_helper1(arrays_drew_by_lot, num_of_calculations, arr_def):
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
        generate_arrays_helper1(arrays_drew_by_lot, num_of_calculations, arr_def)
    return arrays_drew_by_lot


def generate_operators(num_of_calculations):
    global maths_operations_size
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
        global loop_nest_level, unique_arrays_write, unique_arrays_read, dependencies, all_arrays, array_sizes, dista, typ, rand_num_of_calculations, init_with
        loop_nest_level = data['loop_nest_level']
        typ = data['type']
        init_with = validate_init_with(data['init_with'])
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
        # validate_dependencies()
        rand_num_of_calculations = []
    for i in range(len(unique_arrays_read["unused"]) - 1):
        rand_num_of_calculations.append(i + 1)


def validate_init_with(init_with):
    if not init_with == 'ones' and not init_with == 'zeros' and not init_with == 'random':
        raise TypeError("Init with can be 'random', 'ones' or 'zeros'")
    else:
        return init_with


def parse_dependencies(all_dependencies):
    """
    CHANGE FROM STRING TO ARRAY OF DISTANCES
    """
    for dependency_name, deps in all_dependencies.items():
        for dependency in deps:
            distances = dependency['distance']
            ret = []
            distances = distances.replace(" ", "")
            distances = distances[1:-1]
            new_dist = ""
            for d in distances:
                if d is ',':
                    if new_dist in string.digits:
                        ret.append(int(new_dist))
                    else:
                        ret.append(dista[new_dist])
                    new_dist = ""
                else:
                    new_dist += d
            distances = tuple(ret)
            for index in range(len(distances)):
                distance = distances[index]
                if distance == 0:
                    distance = (0, 0)
                else:
                    dest_dist = random.randrange(distance)
                    if dependency_name == 'FLOW':
                        distance = (dest_dist, -distance + dest_dist)
                    elif dependency_name == 'ANTI':
                        distance = (dest_dist, distance + dest_dist)
                    else:
                        flip = random.choice(('-1', '+1'))
                        distance = (dest_dist, eval(flip) * distance + dest_dist)

                distances = list(distances)
                distances[index] = distance
                distances = tuple(distances)
            dependency['distance'] = distances
    return all_dependencies


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
    gen_scalar_part = ''
    curr_val = affine[1][0]
    if curr_val > 0:
        gen_scalar_part = ' - '
    elif curr_val < 0:
        gen_scalar_part = ' + '
    gen_scalar_part += str(abs(curr_val))
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
        lgr.write_init_array(array_name, array_size, file, typ, init_with)


def run_dependencies():
    """Go throw all dependencies, create each dependency with prepared functions and put it into c.Statement
    :return c.Block containing all dependencies with c.Statement
    """
    block_with_dependencies = []
    for dependency, arrays in dependencies.items():
        if arrays:
            for array in arrays:
                array_name = array['array_name']
                distances = array['distance']
                extra = array['extra']
                for arr_name, arr_size in all_arrays.items():
                    if array_name == arr_name:
                        optimize = False
                        dest_array = array_name
                        src_array = array_name
                        for index in range(len(arr_size)):
                            distance = distances[index]
                            if distance[0] == 0:
                                dest_dist = ''
                            elif str(distance[0])[0] == '-':
                                optimize = True
                                dest_dist = str(distance[0])
                            else:
                                optimize = True
                                dest_dist = '+' + str(distance[0])
                            if distance[1] == 0:
                                src_dist = ''
                            elif str(distance[1])[0] == '-':
                                optimize = True
                                src_dist = str(distance[1])
                            else:
                                optimize = True
                                src_dist = '+' + str(distance[1])
                            dest_array += f'[{lgr.generate_loop_index(index % loop_nest_level)}{dest_dist}]'
                            src_array += f'[{lgr.generate_loop_index(index % loop_nest_level)}{src_dist}]'
                        stmt = dependency_function[dependency](dest_array, src_array, optimize, extra)
                        if stmt:
                            block_with_dependencies.append(c.Statement('\n' + add_indent() + stmt))
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
        max_tuple_size = max(max_tuple_size, len(tupl[1]))

    lower_bounds = [-math.inf] * max_tuple_size
    upper_bounds = [math.inf] * max_tuple_size

    for tupl in affine_fcts:
        index = -1
        for t in tupl[1]:
            index += 1
            lower_bounds[index] = max(lower_bounds[index], -1 * int(t[0]))
            lower_bounds[index] = max(lower_bounds[index], -1 * int(t[1]))
            upper_bounds[index] = min(upper_bounds[index], all_arrays[tupl[0]][index] - int(t[0]))
            upper_bounds[index] = min(upper_bounds[index], all_arrays[tupl[0]][index] - int(t[1]))

            lower_bounds[index] = max(lower_bounds[index], 0)  # todo 0 because of "random" part which is always without translation
            upper_bounds[index] = min(upper_bounds[index], all_arrays[tupl[0]][index])

    return [lower_bounds[::-1], upper_bounds[::-1]]


def global_bounds():
    global concat_depen
    concat_depen = []
    for dependency_name, arrays in dependencies.items():
        if arrays:
            for array in arrays:
                concat_depen.append([array['array_name'],array['distance']])
    return concat_depen


def populate_literal_values(literal_values_set, data):
    data = "".join(data.split())  # remove all whitespaces
    expresion_as_string = get_arrays_from_string(data)
    for res in expresion_as_string:
        if res not in literal_values_set.keys():
            literal_values_set[res] = [0, stmt_counter]
        literal_values_set[res][0] += 1


def get_arrays_from_string(str):
    str = re.findall(r'(\w+(\[.*?\])+)', str)
    str = [i[0] for i in str]
    return str


def add_indent():
    return " " * (loop_nest_level + 3)


if __name__ == '__main__':
    parse_input()
