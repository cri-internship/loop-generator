import os

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
json_input_path = os.path.join(PROJECT_PATH, 'input')
src_path = os.path.join(PROJECT_PATH, 'src')

array_names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
dimension_names = 'xyzv'
number_of_array_range = (1, 2)  # the first value is a min number of arrays, second one is the maximum
dimensions_of_array_range = (1, 3)
dimension_range = (1, 100)
loop_nest_level_range = (1, 4)
distances_range = (0, 5)
number_of_dependencies_range = (1, 5)
array_type_options = ['float', 'double', 'int']
array_init_options = ['ones', 'zeros', 'random']
dependence_type_options = ['FLOW', 'ANTI', 'INPUT', 'OUTPUT']
mix_in_options = ['num_val', 'random']

number_of_iterations_for_random_generation = 10
