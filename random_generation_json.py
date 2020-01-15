from random import randint
from random import choice
from random import sample
import json
import os
from auxillary_functions import get_timestamp
from generation_settings import *
from generation_settings import json_input_path
from auxillary_functions import do_for_all_files_in_directory
from generation_settings import PROJECT_PATH
from auxillary_functions import delete


def generate_arrays_randomly():
    arrays = []
    number_of_arrays = randint(number_of_array_range[0], number_of_array_range[1])
    for array_index in range(number_of_arrays):
        array_name = array_names[array_index]
        number_of_dimensions = randint(dimensions_of_array_range[0], dimensions_of_array_range[1])
        dimensions = []
        for dimension_index in range(number_of_dimensions):
            dimension = randint(dimension_range[0], dimension_range[1])
            dimensions.append(dimension)
        arrays.append((array_name, dimensions))
    return arrays


def generate_code_options_randomly():
    loop_nest_level = randint(loop_nest_level_range[0], loop_nest_level_range[1])
    array_type = choice(array_type_options)
    array_init = choice(array_init_options)
    return loop_nest_level, array_type, array_init


def generate_unique_reads_and_writes_randomly(arrays):
    unique_reads = sample(arrays, randint(0, len(arrays)))
    unique_writes = sample(arrays, randint(0, len(arrays)))
    return unique_reads, unique_writes


def generate_dependencies_randomly(arrays):
    dependencies = []
    number_of_dependencies = randint(number_of_dependencies_range[0], number_of_dependencies_range[1])
    for dependence_index in range(number_of_dependencies):
        dependence_type = choice(dependence_type_options)
        array = choice(arrays)
        mix_in = choice(mix_in_options)
        number_of_dimensions = len(array[1])
        distance = [0] * number_of_dimensions
        for idx, dist in enumerate(distance):
            distance[idx] = randint(distances_range[0], distances_range[1])
        dependencies.append((dependence_type, array, mix_in, distance))
    return dependencies


def init_of_json_file(code_options):
    loop_nest_level, array_type, array_init = code_options
    generated_file = {}
    generated_file["array_sizes"] = {}
    generated_file["type"] = array_type
    generated_file["init_with"] = array_init
    generated_file["loop_nest_level"] = loop_nest_level
    generated_file["unique_arrays_write"] = []
    generated_file["unique_arrays_read"] = []
    generated_file["dependencies"] = {"FLOW": [], "ANTI": [], "OUTPUT": [], "INPUT": []}
    return generated_file


def fill_in_arrays(generated_file, arrays):
    for array in arrays:
        name_index = 0
        for dimension_value in array[1]:
            array_name = array[0]
            dim_name = dimension_names[name_index] + array_name
            generated_file['array_sizes'][dim_name] = dimension_value
            name_index += 1


def fill_in_read_and_writes(generated_file, arrays, to_read=True):
    for array in arrays:
        dim_name_separated = ''
        name_index = 0
        for dimension_value in array[1]:
            array_name = array[0]
            dim_name_separated += dimension_names[name_index] + array_name + ','
            name_index += 1
        dim_name_separated = dim_name_separated[:len(dim_name_separated) - 1]
        array_to_fill_in = array[0] + '[{}]'.format(dim_name_separated)
        if (to_read):
            generated_file["unique_arrays_read"].append(array_to_fill_in)
        else:
            generated_file["unique_arrays_write"].append(array_to_fill_in)


def fill_in_dependencies(generated_file, dependencies):
    for dependence in dependencies:
        type_of_dependence = dependence[0]
        array_with_dependence = dependence[1][0]
        dependence_mix_in = dependence[2]
        distance = ''
        for value in dependence[3]:
            distance += str(value) + ','
        distance = '(' + distance + ')'
        generated_file["dependencies"][type_of_dependence].append(
            {'array_name': array_with_dependence, "distance": distance, "mix_in": dependence_mix_in})


def generate_and_save_json():
    arrays = generate_arrays_randomly()
    code_options = generate_code_options_randomly()
    reads_and_writes = generate_unique_reads_and_writes_randomly(arrays)
    dependencies = generate_dependencies_randomly(arrays)
    json_file = init_of_json_file(code_options)
    fill_in_arrays(json_file, arrays)
    fill_in_read_and_writes(json_file, reads_and_writes[0], to_read=True)
    fill_in_read_and_writes(json_file, reads_and_writes[1], to_read=False)
    fill_in_dependencies(json_file, dependencies)
    filename = get_timestamp() +'.json'
    file_destination = os.path.join(json_input_path, filename)
    with open(file_destination, 'w') as fp:
        json.dump([json_file], fp)


def create_code_based_on_json(filename):
    script_path = os.path.join(PROJECT_PATH, 'create_kernels_with_deps.py')
    os.system('python {} {}'.format(script_path, filename))


def main():
    do_for_all_files_in_directory(json_input_path,'json',delete)
    for iterations in range(number_of_iterations_for_random_generation):
        generate_and_save_json()
    do_for_all_files_in_directory(json_input_path, 'json', create_code_based_on_json)


if __name__ == '__main__':
    main()
