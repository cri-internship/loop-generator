import itertools
import json
import random
from random import randint
from typing import List, Dict, Tuple

from auxillary_functions import get_timestamp
from settings import *
from settings import loop_nest_level


def generate_additional_computation(array_name: str, array_access_function: List[int]) -> Dict:
    additional_computation = {'array_name': array_name, 'array_access_function': str(array_access_function)}
    return additional_computation


def generate_dependency(distances: List[Tuple]) -> Dict:
    dependency = {'distance': str(distances)}
    return dependency


def generate_instruction(array: str, index_permutation: Tuple, dependencies: Dict,
                         additional_computations: List[Dict]) -> Dict:
    instruction = {'array_name': array, 'index_permutation': str(index_permutation), 'dependencies': dependencies,
                   'additional_computation': additional_computations}
    return instruction


def generate_list_of_additional_computations(n: int, arrays: List[str], access_functions: List[List[int]]) -> List[
    Dict]:
    computations = []
    for i in range(n):
        computations.append(generate_additional_computation(arrays[i], access_functions[i]))
    return computations


def generate_list_of_instructions(n: int, arrays: List[str], index_permutation: List[Tuple], dependencies: List[Dict],
                                  additional_computations: List[List[Dict]]) -> List[Dict]:
    instructions = []
    for i in range(n):
        instructions.append(
            #generate_instruction(arrays[0], index_permutation[i], dependencies[i], additional_computations[i]))
            generate_instruction(arrays[0], index_permutation[i], dependencies[i], []))
    return instructions


def generate_code_parameters(loop_nest_level: int):
    return loop_nest_level, 'float', 'random',


def generate_access_function_uniformly(dim):
    original_permutation = [i for i in range(loop_nest_level)]
    permutations = list(itertools.permutations(original_permutation))
    chosen_permutation = random.choices(permutations, k=1)[0]  # to add constant term
    function = [[0] * (loop_nest_level + 1) for _ in range(dim)]
    for idx, dimension in enumerate(chosen_permutation[:dim]):
        function[idx][dimension] = 1
    return function


def random_generation_of_computations(data_arrays):
    number_of_computations = randint(*number_of_computations_range)
    chosen_arrays = random.choices(data_arrays, k=number_of_computations)
    names = [x[0] for x in chosen_arrays]
    array_dims = [len(x[1]) for x in chosen_arrays]
    access_functions = []
    for i in range(number_of_computations):
        access_function = generate_access_function_uniformly(array_dims[i])
        access_functions.append(access_function)
    return generate_list_of_additional_computations(number_of_computations, names, access_functions)


def random_generation_of_instructions(number_of_instructions: int, arrays: List[List[Tuple[str, List[int]]]]):
    names = [array[0][0] for array in arrays]

    permutations = []
    for i in range(number_of_instructions):
        # number_of_dims = len(arrays[i][0][1])
        basic_permutation = [x for x in range(loop_nest_level)]
        permutation = random.choices(list(itertools.permutations(basic_permutation)))[0]
        permutations.append(permutation)
    computations = []

    for i in range(number_of_instructions):
        computations.append(random_generation_of_computations(arrays[0]))

    dependencies = []
    for i in range(number_of_instructions + 1):
        a = random.randint(-5, 5)
        b = random.randint(-5, 5)
        c = random.randint(-5, 5)
        d = random.randint(-5, 5)

        # dependencies.append(generate_dependency([(first_dep, second_dep),(random.randint(-5,5), random.randint(-5,
        # 5))]))
        dependencies.append(generate_dependency([(a, b), (c, d)]))
    return generate_list_of_instructions(number_of_instructions, names, permutations, dependencies, computations)


def instruction_generation(arrays, n=1):
    n = random.randint(1, 1)
    return random_generation_of_instructions(n, arrays)


def generate_arrays():
    n = random.randint(1, 1)
    arrays = []
    for i in range(n):
        arrays.append(((array_names[i]), [4096, 4096]))
    return [arrays]


def get_unique_arrays(generated_arrays):
    unique_arrays = []
    for instruction in generated_arrays:
        for array in instruction:
            if array in unique_arrays:
                pass
            else:
                unique_arrays.append(array)
    return unique_arrays


def init_of_json_file(code_options=(2, 'float', 'random')):
    loop_nest_level, array_type, array_init = code_options
    generated_file = {"array_sizes": {}, "distances": {}, "type": array_type, "init_with": array_init,
                      "loop_nest_level": loop_nest_level, "arrays": [], "instructions": []}
    return generated_file


def init_json_files(number_of_files):
    files = []
    for i in range(number_of_files):
        files.append(init_of_json_file())
    return files


def fill_in_arrays(generated_file, arrays):
    for array in arrays:
        dim_string = ''
        for dimension_value in array[1]:
            dim_string += str(dimension_value) + ','
        dim_string = dim_string[:-1]
        array_name = array[0]
        generated_file['arrays'].append(array_name + '[{}]'.format(dim_string))


def generation_pipeline():
    arrays = generate_arrays()
    instructions = instruction_generation(arrays)
    file = init_of_json_file()
    fill_in_arrays(file, get_unique_arrays(arrays))
    file["instructions"] = instructions
    filename = get_timestamp().replace(".", "") + '.json'
    file_destination = os.path.join('/home/maksim/PycharmProjects/loop-generator/input', filename)
    with open(file_destination, 'w') as fp:
        json.dump([file], fp)


def generate_files():
    for _ in range(number_of_repititions):
        generation_pipeline()


def main():
    generate_files()


if __name__ == '__main__':
    main()
