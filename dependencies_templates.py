import random
import loops_dependencies as ld


def flow_dependency(dest_array_name, source_array_name, optimize, mix_in):
    arr_name = dest_array_name.partition('[')[0]
    arr_def = (arr_name, ld.all_arrays[arr_name])
    if mix_in == 'random':
        result = gen_random_part(dest_array_name, source_array_name, optimize, arr_def)
    else:
        result = gen_scalar_part(dest_array_name, source_array_name, optimize)
    return result


def gen_random_part(dest_array_name, source_array_name, optimize, arr_def):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [
            f'{source_array_name}{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)}']
        # result = gen_based_on_usage_flow(stmt_body)
        if dest_array_name in ld.literal_values_destination.keys() and source_array_name in ld.literal_values_source.keys():
            result = ""
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            ld.populate_values(dest_array_name, source_array_name)
    else:
        stmt_body['destination'] = [dest_array_name,
                                    f'{ld.gen_random_stmt(ld.unique_arrays_write)}']
        stmt_body['source'] = [f'{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)[1:]}',
                               f'{source_array_name}{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations),arr_def)}']
        result = gen_based_on_usage_flow(stmt_body)
    return result


def gen_scalar_part(dest_array_name, source_array_name, optimize):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [f'{source_array_name}{random.choice(ld.maths_operations)}{ld.gen_random_scalar()}']
        # result = gen_one_line_flow(stmt_body)
        if dest_array_name in ld.literal_values_destination.keys() and source_array_name in ld.literal_values_source.keys():
            result = ""
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            ld.populate_values(dest_array_name, source_array_name)
    else:
        stmt_body['destination'] = [dest_array_name, f'{ld.generate_var("float ")}']
        stmt_body['source'] = [f'{ld.gen_random_scalar()}',
                               f'{source_array_name}{random.choice(ld.maths_operations)}{ld.gen_random_scalar()}']
        result = gen_based_on_usage_flow(stmt_body)
    return result


def gen_based_on_usage_flow(stmt_body):
    array = stmt_body['destination'][0]
    if satisfies_flow(array):
        dest_usage = ld.literal_values_destination[array][1]
        source_usage = ld.literal_values_source[array][1]
        if dest_usage <= source_usage:
            result = ""
        else:
            result = gen_full_stmt_flow(stmt_body)
    elif array in ld.literal_values_destination.keys():
        result = gen_one_line_flow(stmt_body, 1)
    else:
        result = gen_full_stmt_flow(stmt_body)
    return result


def satisfies_flow(array):
    return array in ld.literal_values_destination.keys() and array in ld.literal_values_source.keys()


def gen_one_line_flow(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    ld.populate_values(destination, source)
    ld.inc_stmt_counter()
    result = destination + '=' + source
    return result


def gen_full_stmt_flow(stmt_body):
    result = gen_one_line_flow(stmt_body, 0) + ';\n'
    result += ld.add_indent() + gen_one_line_flow(stmt_body, 1)
    return result


def anti_dependency(dest_array_name, source_array_name, optimize, mix_in):
    arr_name = dest_array_name.partition('[')[0]
    arr_def = (arr_name, ld.all_arrays[arr_name])
    if mix_in == 'random':
        result = gen_random_part_anti(dest_array_name, source_array_name, optimize, arr_def)
    else:
        result = gen_scalar_part_anti(dest_array_name, source_array_name, optimize)
    return result


def gen_random_part_anti(dest_array_name, source_array_name, optimize, arr_def):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [
            f'{source_array_name}{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)}']
        # result = gen_based_on_usage_flow(stmt_body,0)
        if dest_array_name in ld.literal_values_destination.keys() and source_array_name in ld.literal_values_source.keys():
            result = ""
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            ld.populate_values(stmt_body['destination'][0], stmt_body['source'][0])
    else:
        stmt_body['destination'] = [f'{ld.gen_random_stmt(ld.unique_arrays_write)}',
                                    dest_array_name]
        stmt_body['source'] = [
            f'{source_array_name}{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)}',
            f'{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)[1:]}']
        result = gen_based_on_usage_anti(stmt_body, source_array_name)
    return result


def gen_scalar_part_anti(dest_array_name, source_array_name, optimize):
    stmt_body = {}
    if optimize:
        stmt_body['destination'] = [dest_array_name]
        stmt_body['source'] = [f'{source_array_name}{random.choice(ld.maths_operations)}{ld.gen_random_scalar()}']
        if dest_array_name in ld.literal_values_destination.keys() and source_array_name in ld.literal_values_source.keys():
            result = ""
        # result = gen_one_line_flow(stmt_body, 0)
        else:
            result = stmt_body['destination'][0] + '=' + stmt_body['source'][0]
            ld.populate_values(stmt_body['destination'][0], stmt_body['source'][0])
    else:
        stmt_body['destination'] = [f'{ld.generate_var(ld.typ)}', dest_array_name]
        stmt_body['source'] = [f'{source_array_name}{random.choice(ld.maths_operations)}{ld.gen_random_scalar()}',
                               f'{ld.gen_random_scalar()}']
        result = gen_based_on_usage_anti(stmt_body, source_array_name)
    return result


def gen_based_on_usage_anti(stmt_body, source_array_name):
    array = source_array_name
    if satisfies_anti(array):
        dest_usage = ld.literal_values_destination[array][1]
        source_usage = ld.literal_values_source[array][1]
        if source_usage < dest_usage:
            result = ""
        else:
            result = gen_full_stmt_anti(stmt_body)
    elif array in ld.literal_values_destination.keys():
        result = gen_one_line_anti(stmt_body, 1)
    else:
        result = gen_full_stmt_anti(stmt_body)
    return result


def satisfies_anti(array):
    return array in ld.literal_values_destination.keys() and array in ld.literal_values_source.keys()


def gen_one_line_anti(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    ld.populate_values(destination, source)
    ld.inc_stmt_counter()
    result = destination + '=' + source
    return result


def gen_full_stmt_anti(stmt_body):
    result = gen_one_line_anti(stmt_body, 0) + ';\n'
    result += ld.add_indent() + gen_one_line_anti(stmt_body, 1)
    return result


def output_dependency(dest_array_name, source_array_name, __, mix_in):
    arr_name = dest_array_name.partition('[')[0]
    arr_def = (arr_name, ld.all_arrays[arr_name])
    stmt_body = {}
    if mix_in == 'random':
        stmt_body['destination'] = [f'{dest_array_name}', f'{source_array_name}']
        stmt_body['source'] = [f'{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)[1:]}',
                               f'{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)[1:]}']
        result = gen_based_on_usage_output(dest_array_name, stmt_body)
    else:
        stmt_body['destination'] = [f'{dest_array_name}', f'{source_array_name}']
        stmt_body['source'] = [f'{ld.gen_random_scalar()}', f'{ld.gen_random_scalar()}']
        result = gen_based_on_usage_output(dest_array_name, stmt_body)
    return result


def gen_based_on_usage_output(dest_array_name, stmt_body):
    if dest_array_name in ld.literal_values_destination.keys():
        dest_usage = ld.literal_values_destination[dest_array_name][0]
        if dest_usage >= 2:
            result = ""
        elif dest_usage == 1:
            result = gen_stmt_output(stmt_body, 0)
    else:
        result = gen_stmt_output(stmt_body, 0) + ';\n'
        result += ld.add_indent() + gen_stmt_output(stmt_body, 1)
    return result


def gen_stmt_output(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    ld.populate_values(destination, source)
    ld.inc_stmt_counter()
    result = destination + '=' + source
    return result


def input_dependency(dest_array_name, source_array_name, __, mix_in):
    arr_name = source_array_name.partition('[')[0]
    arr_def = (arr_name, ld.all_arrays[arr_name])
    stmt_body = {}
    if mix_in == 'random':
        stmt_body['destination'] = [f'{ld.gen_random_stmt(ld.unique_arrays_write)}',
                                    f'{ld.gen_random_stmt(ld.unique_arrays_write)}']
        stmt_body['source'] = [
            f'{dest_array_name}{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)}',
            f'{source_array_name}{ld.gen_calc_for_read(random.choice(ld.rand_num_of_calculations), arr_def)}']
        result = gen_based_on_usage(source_array_name, arr_def, stmt_body)
    else:
        stmt_body['destination'] = [f'{ld.generate_var(ld.typ)}', f'{ld.generate_var(ld.typ)}']
        stmt_body['source'] = [f'{dest_array_name}{random.choice(ld.maths_operations)}{ld.gen_random_scalar()}',
                               f'{source_array_name}{random.choice(ld.maths_operations)}{ld.gen_random_scalar()}']
        result = gen_based_on_usage(source_array_name, arr_def, stmt_body)
    return result


def gen_based_on_usage(source_array_name, arr_def, stmt_body):
    if source_array_name in ld.literal_values_source.keys():
        source_usage = ld.literal_values_source[source_array_name][0]
        if source_usage >= 2:
            result = ""  # TODO maybe None???
        elif source_usage == 1:
            result = gen_stmt_input(stmt_body, 0)
    else:
        result = gen_stmt_input(stmt_body, 0) + ';\n'
        result += ld.add_indent() + gen_stmt_input(stmt_body, 1)
    return result


def gen_stmt_input(stmt_body, element):
    destination = stmt_body['destination'][element]
    source = stmt_body['source'][element]
    ld.populate_values(destination, source)
    result = destination + '=' + source
    ld.inc_stmt_counter()
    return result
