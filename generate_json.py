import json
import random
from random import randint
from auxillary_functions import delete
from auxillary_functions import do_for_all_files_in_directory
from auxillary_functions import get_timestamp
from settings import *
from settings import json_input_path
from settings import src_path

from settings import cache_size_sienne
from settings import init_bytes
import itertools
from settings import number_of_repititions


def find_closest_2_power(n):
    x = 1
    while (True):
        if n > x:
            x *= 2
        else:
            return x // 2


def get_dimension_of_array(number_of_1D_arrays, number_of_2D_arrays, index):
    if index < number_of_1D_arrays:
        return 1
    else:
        if index >= number_of_1D_arrays + number_of_2D_arrays:
            return 3
        else:
            return 2


def calculate_ranges(number_of_1D_arrays, number_of_2D_arrays, number_of_3D_arrays, cache_size, init_size):
    dimensions = []
    total_number_of_arrays = number_of_1D_arrays + number_of_2D_arrays + number_of_3D_arrays
    number_of_dimensions = number_of_1D_arrays + pow(number_of_2D_arrays, 2) + pow(number_of_3D_arrays, 3)
    number_of_elements_per_dimension = cache_size / (init_size * number_of_dimensions)
    number_of_elements_per_dimension = find_closest_2_power(number_of_elements_per_dimension)
    for index in range(total_number_of_arrays):
        dimension = get_dimension_of_array(number_of_1D_arrays, number_of_2D_arrays, index)
        dimensions.append(find_closest_2_power(pow(number_of_elements_per_dimension, 1 / dimension)))
    return dimensions


def generate_arrays(number_of_1D_arrays, number_of_2D_arrays, number_of_3D_arrays, cache_size, init_size):
    arrays = []
    ranges = calculate_ranges(number_of_1D_arrays, number_of_2D_arrays, number_of_3D_arrays, cache_size, init_size)
    total_number_of_arrays = number_of_1D_arrays + number_of_2D_arrays + number_of_3D_arrays
    for array_index in range(total_number_of_arrays):
        array_name = array_names[array_index]
        number_of_dimensions = get_dimension_of_array(number_of_1D_arrays, number_of_2D_arrays, array_index)
        dimensions = [ranges[array_index]] * number_of_dimensions
        arrays.append((array_name, dimensions))
    return arrays


def generate_code_options_randomly():
    loop_nest_level = randint(loop_nest_level_range[0], loop_nest_level_range[1])
    array_type = random.choice(array_type_options)
    array_init = random.choice(array_init_options)
    return loop_nest_level, array_type, array_init


def generate_instruction_blocks(arrays, permutations, dependances_range):
    dependencies = []
    array_names = []
    selected_permutations = []
    for array in arrays:
        array_name = array[0]
        dimensions = len(array[1])
        dep_vector = [0] * dimensions
        for idx, element in enumerate(dep_vector):
            dep_vector[idx] = random.randint(*dependances_range)
        dependencies.append(tuple(dep_vector))
        array_names.append(array_name)
        selected_permutations.append(random.choice(permutations))
    return dependencies, array_names, selected_permutations


def generate_instruction_block_for_bruteforce(arrays, dependances_range):
    dependencies = []
    array_names = []
    for idx, array in enumerate(arrays):
        array_name = array[0]
        dimensions = len(array[1])
        dep_vector = [0] * dimensions
        for idx, element in enumerate(dep_vector):
            dep_vector[idx] = random.randint(*dependances_range)
        dependencies.append(tuple(dep_vector))
        array_names.append(array_name)
    return dependencies, array_names


def generate_instruction_blocks_bruteforce(arrays, permutations, dependances_range):
    instructions = []

    if len(arrays) == 2:
        for first_permutation in permutations:
            for second_permutation in permutations:
                dependencies, array_names = generate_instruction_block_for_bruteforce(arrays, dependances_range)
                selected_permutations = [first_permutation, second_permutation]
                instructions.append((dependencies, array_names, selected_permutations))
    else:

        if len(arrays) == 1:
            for permutation in permutations:
                dependencies, array_names = generate_instruction_block_for_bruteforce(arrays, dependances_range)
                selected_permutations = [permutation]
                instructions.append((dependencies, array_names, selected_permutations))

        else:
            for _ in range(number_of_repititions):
                dependencies, array_names = generate_instruction_block_for_bruteforce(arrays, dependances_range)
                selected_permutations = [None] * len(array_names)
                for idx, permutation in enumerate(selected_permutations):
                    selected_permutations[idx] = random.choice(permutations)
                instructions.append((dependencies, array_names, selected_permutations))

    return instructions


def init_of_json_file(code_options):
    loop_nest_level, array_type, array_init = code_options
    generated_file = {"array_sizes": {}, "distances": {}, "type": array_type, "init_with": array_init,
                      "loop_nest_level": loop_nest_level, "arrays": [], "instructions": []}
    return generated_file


def fill_in_arrays(generated_file, arrays):
    for array in arrays:
        dim_string = ''
        for dimension_value in array[1]:
            dim_string += str(dimension_value) + ','
        dim_string = dim_string[:-1]
        array_name = array[0]
        generated_file['arrays'].append(array_name + '[{}]'.format(dim_string))


def fill_in_instructions(generated_file, dependencies, array_names, permutation):
    for idx, array_name in enumerate(array_names):
        instruction_block = {}
        instruction_block['array_name'] = array_name
        instruction_block['index_permutation'] = str(tuple(permutation[idx]))
        instruction_block['dependencies'] = {"distance": str([dependencies[idx]])}
        generated_file['instructions'].append(instruction_block)


def generate_and_save_json(number_of_1D_arrays, number_of_2D_arrays, number_of_3D_arrays, cache_size, init_size,
                           permutations, dependenes_range):
    code_options = generate_code_options_randomly()
    arrays = generate_arrays(number_of_1D_arrays, number_of_2D_arrays, number_of_3D_arrays, cache_size, init_size)
    instruction_blocks = generate_instruction_blocks(arrays, permutations, dependenes_range)
    json_file = init_of_json_file(code_options)
    fill_in_arrays(json_file, arrays)
    fill_in_instructions(json_file, *instruction_blocks)
    filename = get_timestamp() + '.json'
    file_destination = os.path.join(json_input_path, filename)
    with open(file_destination, 'w') as fp:
        json.dump([json_file], fp)


def generate_and_save_json_bruteforce(number_of_1D_arrays, number_of_2D_arrays, number_of_3D_arrays, cache_size,
                                      init_size, permutations, dependenes_range):
    code_options = generate_code_options_randomly()
    arrays = generate_arrays(number_of_1D_arrays, number_of_2D_arrays, number_of_3D_arrays, cache_size, init_size)
    instruction_blocks = generate_instruction_blocks_bruteforce(arrays, permutations, dependenes_range)
    for instruction_block in instruction_blocks:
        json_file = init_of_json_file(code_options)
        fill_in_arrays(json_file, arrays)
        fill_in_instructions(json_file, *instruction_block)
        filename = get_timestamp().replace(".", '') + '.json'
        file_destination = os.path.join(json_input_path, filename)
        with open(file_destination, 'w') as fp:
            json.dump([json_file], fp)


def initial_strategy():
    no_deps = (0, 0)
    deps = (-5, 5)
    # arrays_numbers = [[0,0,1],[0,0,2],[0,1,0],[0,1,1],[0,2,0],[0,0,3]]
    arrays_numbers = [[0, 0, 2]]
    permutations = list(itertools.permutations([0, 1, 2]))
    for array_number in arrays_numbers:
        generate_and_save_json_bruteforce(*array_number, cache_size_sienne, init_bytes, permutations, deps)
        generate_and_save_json_bruteforce(*array_number, cache_size_sienne, init_bytes, permutations, no_deps)


def main():
    do_for_all_files_in_directory(json_input_path, '.json', delete)
    do_for_all_files_in_directory(src_path, '.c', delete)
    initial_strategy()


if __name__ == '__main__':
    main()
