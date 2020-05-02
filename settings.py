import os

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
json_input_path = os.path.join(PROJECT_PATH, 'input')
src_path = os.path.join(PROJECT_PATH, 'src')
init_array_path = os.path.join(PROJECT_PATH, 'init_array_lib')
generation_script_path = os.path.join(PROJECT_PATH, 'create_kernels_with_deps.py')

array_names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
dimension_names = 'xyzv'
number_of_array_range = [1, 2, 3, 4, 5]
number_of_arrays_weights = [0.25, 0.3, 0.25, 0.1, 0.1]
dimensions_of_array_range = (1, 3)
nest_eq_dimensionality_pattern = [[2 ** 18, 2 ** 19, 2 ** 17, 2 ** 16], [2 ** 9, 2 ** 8, 2 ** 7],
                                  [2 ** 6, 2 ** 5, 2 ** 4], [2 ** 6, 2 ** 5, 2 ** 4]]

huge_ranges = [[2 ** 15, 2 ** 21, 2 ** 27, 2 ** 26], [2 ** 14, 2 ** 13, 2 ** 12],
                                  [2 ** 10, 2 ** 9, 2 ** 8], [2 ** 10, 2 ** 9, 2 ** 8]]
loop_nest_level_range = (1, 4)
distances_range = (0, 5)
number_of_dependencies_range = [1, 2, 3, 4, 5, 6, 7]
number_of_dependencies_weights = [0.15,0.2,0.2,0.15,0.15,0.1,0.05]


array_type_options = ['int']
array_init_options = ['ones', 'zeros', 'random']
dependence_type_options = ['FLOW', 'ANTI', 'INPUT', 'OUTPUT']
mix_in_options = ['num_val', 'random']
number_of_iterations_for_random_generation = 100
