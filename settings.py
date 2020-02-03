import os

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
json_input_path = os.path.join(PROJECT_PATH, 'input')
src_path = os.path.join(PROJECT_PATH, 'src')
init_array_path = os.path.join(PROJECT_PATH, 'init_array_lib')
generation_script_path = os.path.join(PROJECT_PATH, 'create_kernels_with_deps.py')

array_names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
dimension_names = 'xyzv'
number_of_array_range = (1, 5)  # the first value is a min number of arrays, second one is the maximum
dimensions_of_array_range = (1, 3)
dimension_range = [[[2**28],[2**13, 2**14],[2**8,2**9], [2**7]],[[2**14],[2**7,2**8],[2**5], [2**5]],[[2**9],[2**4, 2**5],[2**3,2**4,2**5], [2**3,2**4,2**5]],[[2**7],[2**4, 2**5],[2**4,2**5], [2**3,2**4,2**5]]]
loop_nest_level_range = (1, 4)
distances_range = (0, 5)
number_of_dependencies_range = (1, 7)
array_type_options = ['int']
array_init_options = ['ones', 'zeros', 'random']
dependence_type_options = ['FLOW', 'ANTI', 'INPUT', 'OUTPUT']
mix_in_options = ['num_val', 'random']
number_of_iterations_for_random_generation = 1