import os

loop_nest_level = 2

number_of_programs_to_generate = 1

PROJECT_PATH = os.path.dirname(os.path.abspath(__file__))
json_input_path = os.path.join(PROJECT_PATH, 'input')
src_path = os.path.join(PROJECT_PATH, 'src')
init_array_path = os.path.join(PROJECT_PATH, 'init_array_lib')
generation_script_path = os.path.join(PROJECT_PATH, 'code_generator_v1.py')
target_path = os.path.join(PROJECT_PATH, 'poly_code')
kernel_list = os.path.join(target_path, 'kernel_list')

array_names = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
dimension_names = 'xyzv'

coef = 1

cache_size_sienne = 12000000 * coef
init_bytes = 4

number_of_instructions_range = (1, 3)
number_of_computations_range = (1, 1)
number_of_arrays = (1, 2)

deps_range = (-5, 5)
loop_nest_level_range = (2, 2)

array_type_options = ['int']
array_init_options = ['random']
mix_in_options = ['num_val', 'random']
maths_symbols = ['+', '-', '*']
first_index = 'a'
number_of_indexes = ord('z') - ord('a') + 1

header_string = r'''# if !defined(DATA_TYPE_IS_INT) && !defined(DATA_TYPE_IS_FLOAT) && !defined(DATA_TYPE_IS_DOUBLE)
#  define DATA_TYPE_IS_DOUBLE
# endif
#ifdef DATA_TYPE_IS_INT
#  define DATA_TYPE int
#  define DATA_PRINTF_MODIFIER "%d "
#endif
#ifdef DATA_TYPE_IS_FLOAT
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%0.2f "
#  define SCALAR_VAL(x) x##f
#  define SQRT_FUN(x) sqrtf(x)
#  define EXP_FUN(x) expf(x)
#  define POW_FUN(x,y) powf(x,y)
# endif
#ifdef DATA_TYPE_IS_DOUBLE
#  define DATA_TYPE double
#  define DATA_PRINTF_MODIFIER "%0.2lf "
#  define SCALAR_VAL(x) x
#  define SQRT_FUN(x) sqrt(x)
#  define EXP_FUN(x) exp(x)
#  define POW_FUN(x,y) pow(x,y)
# endif
# endif
'''
