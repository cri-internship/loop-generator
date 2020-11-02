import os




number_of_repititions = 10

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
json_input_path = os.path.join(PROJECT_PATH, 'input')
src_path = os.path.join(PROJECT_PATH, 'src')
init_array_path = os.path.join(PROJECT_PATH, 'init_array_lib')
generation_script_path = os.path.join(PROJECT_PATH, 'code_generator_v1.py')

array_names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
dimension_names = 'xyzv'



cache_size_sienne = 1024*11228
init_bytes = 4
deps_range = (-5,5)
loop_nest_level_range = (3, 3)



array_type_options = ['float']
array_init_options = ['random']
mix_in_options = ['num_val', 'random']
maths_symbols = ['+', '-', '*']
first_index = 'a'
number_of_indexes = ord('z') - ord('a') + 1


