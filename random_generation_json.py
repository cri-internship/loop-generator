import json
from random import choice
from random import randint
from auxillary_functions import delete
from auxillary_functions import do_for_all_files_in_directory
from auxillary_functions import get_timestamp
from generation_settings import *
from generation_settings import json_input_path
from generation_settings import src_path


def generate_arrays_randomly():
    arrays = []
    number_of_arrays = randint(number_of_array_range[0], number_of_array_range[1])
    for array_index in range(number_of_arrays):
        array_name = array_names[array_index]
        number_of_dimensions = randint(dimensions_of_array_range[0], dimensions_of_array_range[1])
        dimensions = []
        for dimension_index in range(number_of_dimensions):
            dimension = randint(dimension_range[0], dimension_range[1]) * 10
            dimensions.append(dimension)
        arrays.append((array_name, dimensions))
    return arrays


def generate_code_options_randomly():
    loop_nest_level = randint(loop_nest_level_range[0], loop_nest_level_range[1])
    array_type = choice(array_type_options)
    array_init = choice(array_init_options)
    return loop_nest_level, array_type, array_init


def generate_unique_reads_and_writes_randomly(arrays):
    # unique_reads = sample(arrays, randint(1, len(arrays)))
    # unique_writes = sample(arrays, randint(1, len(arrays)))
    unique_reads = arrays
    unique_writes = arrays
    return unique_reads, unique_writes


def intersection(lst1, lst2):
    lst3 = [value for value in lst1 if value in lst2]
    return lst3


'''def check_possibility_for_dependence_generation(arrays_for_read, arrays_for_write, dep_type):
    possibility = True

    if dep_type == 'FLOW' or dep_type == 'ANTI':
        if len(arrays_for_write) > 1 and len(arrays_for_read) > 1:
            pass
        else:
            possibility = False
    elif dep_type == 'OUTPUT':
        if len(arrays_for_write) > 0:
            pass
        else:
            possibility = False
    else:
        if len(arrays_for_read) > 0:
            pass
        else:
            possibility = False

    return possibility'''


def generate_dependencies_randomly(arrays):
    dependencies = []
    number_of_dependencies = randint(number_of_dependencies_range[0], number_of_dependencies_range[1])
    for i in range(number_of_dependencies):
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
    generated_file = {"array_sizes": {}, "distances": {"d1": 0}, "type": array_type, "init_with": array_init,
                      "loop_nest_level": loop_nest_level, "unique_arrays_write": [], "unique_arrays_read": [],
                      "dependencies": {"FLOW": [], "ANTI": [], "OUTPUT": [], "INPUT": []}}
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
        if to_read:
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

    for dependence_type in list(generated_file["dependencies"].keys()):
        if len(generated_file["dependencies"][dependence_type]) == 0:
            del generated_file["dependencies"][dependence_type]


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
    filename = get_timestamp() + '.json'
    file_destination = os.path.join(json_input_path, filename)
    with open(file_destination, 'w') as fp:
        json.dump([json_file], fp)


def main():
    do_for_all_files_in_directory(json_input_path, 'json', delete)
    do_for_all_files_in_directory(src_path, 'c', delete)
    for iterations in range(number_of_iterations_for_random_generation):
        generate_and_save_json()


if __name__ == '__main__':
    main()
