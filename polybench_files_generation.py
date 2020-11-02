import random
import os
from settings import header_string
import json
from settings import dimension_names


iterators = ['i', 'j', 'k', 'l']


def variable_assignment(generated_code, arrays):
    """
    This function adds vars assignment + returns a list of variables that can be a left-value
    :param generated_code: list, list of strings of generated code
    :param arrays: dict, dict that stores information about arrays
    :return: list, list of strings, each string - left value in assignment
    """
    code_vars = []
    for array in arrays:
        dims = array[1]
        for key in dims.keys():
            code_var = key.lower()
            code_vars.append(code_var)
            header_var = key
            generated_code.append('int {} = {};'.format(code_var, header_var))
    return code_vars


def array_declaration(generated_code, arrays):
    """
    This function returns a list of strings, each string stores a proper format for array declaration
    This function appends strings to the list "generated_code" related to function that declares arrays
    :param generated_code: list of strings, strings stores generated code
    :param arrays: dict, stores information about arrays
    :return: each string stores a proper format for array declaration
    """
    code_arrays = []
    for array in arrays:
        _, array_name, number_of_dims, argument_string = generate_argument_string(array)
        generated_code.append(
            'POLYBENCH_{}D_ARRAY_DECL({}, DATA_TYPE,'.format(str(number_of_dims), array_name) + argument_string + ');')
        code_arrays.append('POLYBENCH_{}D({},{})'.format(str(number_of_dims), array_name, argument_string))
        return code_arrays


def init_and_kernel_call(generated_code, arrays, code_vars, kernel_name):
    """
    This code appends to "generated_code" list strings related to calls of init functions + kernel call
    :param generated_code: list of strings, strings stores generated code:
    :param arrays: dict, stores information about arrays
    :param code_vars: list, list of strings, each string - left value in assignment
    :param kernel_name: string, name of our kernel
    """
    argument_string = ''
    for var in code_vars:
        argument_string += var + ','
    for array in arrays:
        argument_string += 'POLYBENCH_ARRAY({})'.format(array[0]) + ','
    argument_string = argument_string[:-1]
    generated_code.append('init_array({});'.format(argument_string))
    generated_code.append('kernel_{}({});'.format(kernel_name, argument_string))


def array_dealocation(generated_code, arrays):
    """
    This function deallocated all the arrays
    :param generated_code: list of strings, strings stores generated code
    :param arrays: dict, stores information about arrays
    """
    for array in arrays:
        generated_code.append('POLYBENCH_FREE_ARRAY({});'.format(array[0]))


def prevent_elimination(generated_code, arrays):
    """
    This function apppends strings to generated code that prevent code elimination
    :param generated_code: list of strings, strings stores generated code
    :param arrays: dict, stores information about arrays
    """
    array = arrays[0]
    argument_string = ''
    for dim in array[1]:
        argument_string += dim + ','
    argument_string += 'POLYBENCH_ARRAY({})'.format(array[0])
    generated_code.append('polybench_prevent_dce(print_array({}));'.format(argument_string))


def add_includes(generated_code, kernel_name):
    """
    This function adds all necessary includes that we have inpolybencch
    :param generated_code: list, list of strings that contain already generated code
    :param kernel_name: string, kernel name
    """
    generated_code.append('#include <stdio.h>')
    generated_code.append('#include <unistd.h>')
    generated_code.append('#include <string.h>')
    generated_code.append('#include <math.h>')
    generated_code.append('#include <polybench.h>')
    generated_code.append('#include <stdio.h>')
    generated_code.append('#include "{}.h"'.format(kernel_name))


def generate_array_reference(name, array_dims):
    dims = len(array_dims.keys())
    reference_string = name
    for idx in range(dims):
        reference_string += '[' + iterators[idx] + ']'
    return reference_string


def print_array(generated_code, arrays):
    """
    This function generates code for printing all the arrays that we have
    :param generated_code: list, list of strings that store generated code
    :param arrays: dict, stores info about arrays
    """
    whole_argument = ''
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        whole_argument += argument_string + ','
    whole_argument = whole_argument[:len(whole_argument) - 1]
    generated_code.append('static void print_array({})'.format(whole_argument))
    generated_code.append('{')
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        generated_code.append('int i,j,k,l;')
        generated_code.append("POLYBENCH_DUMP_START;")
        generated_code.append("POLYBENCH_DUMP_BEGIN(\"{}\");".format(array_name))
        generated_code.append("POLYBENCH_DUMP_START;")
        generated_code.append("POLYBENCH_DUMP_BEGIN(\"{}\");".format(array_name))
        for i in range(len(array_dim)):
            current_var = list(array_dim.keys())[i].lower()
            generated_code.append(
                'for ({} = 0; {} < {}; {}++) {{'.format(iterators[i], iterators[i], current_var, iterators[i]))
        generated_code.append(r'fprintf (POLYBENCH_DUMP_TARGET, "\n");')
        generated_code.append('fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, {});'.format(
            generate_array_reference(array_name, array_dim)))
        generated_code.append(r'}' * len(array_dim.keys()))
        generated_code.append("POLYBENCH_DUMP_END(\"{}\");".format(array_name))
        generated_code.append("POLYBENCH_DUMP_FINISH;")
    generated_code.append("}")


def get_body(kernel_name, folder):
    """
    This function returns a list of string that contain original code that perform computations
    :param kernel_name: string, name of our computational kernel
    :param folder: path, path to the folder with kernels
    :return: list, list of strings, each string is a line of original code
    """
    start_index = -1
    end_index = -1
    kernel_path = os.path.join(folder, kernel_name + '.c')
    with open(kernel_path) as f:
        lines = f.read().splitlines()
    for idx, line in enumerate(lines):
        if 'for' in line and start_index == -1:
            start_index = idx
        if 'clock' in line:
            end_index = idx - 1
    return lines[start_index:end_index]


def generate_function_call(generated_code, kernel_name, code_vars, code_arrays, folder):
    """
    This function creates a body of the function that contains all computational code
    :param generated_code: list, list of strings that store generated code
    :param kernel_name: string, name of our computational kernel
    :param code_vars: list, list of strings, each string - left value in assignment
    :param code_arrays: list, list of strings, each string stores a proper format for array declaration
    :param folder: path, path to the folder with kernels
    """
    function_signature = 'void kernel_{}('.format(kernel_name)
    for code_var in code_vars:
        function_signature += 'int {},'.format(code_var)

    for code_array in code_arrays:
        function_signature += 'DATA_TYPE {},'.format(code_array)

    function_signature = function_signature[:-1]
    function_signature += '){'

    function_body = get_body(kernel_name, folder)
    modified_body = [function_signature, 'polybench_start_instruments;', '#pragma scop']
    modified_body += function_body
    modified_body.append('#pragma endscop')
    modified_body.append('polybench_stop_instruments;')
    modified_body.append('polybench_print_instruments;}')
    generated_code += modified_body


def generate_argument_string(array):
    """
    This function returns an argument string based on input arrays + array name + it's dimensions
    :param array: (array_name, {dims}), stores information about array
    :return: string, string, dict, string, first parameter to return is argument string, second is an array name,
    third one is dictionary of dimensions, the fourth is just argument string not inserted to argument string
    """
    name = array[0]
    dimension = array[1]
    argument_string = ''
    arguments = ''
    for dim in dimension.keys():
        argument_string += 'int ' + dim.lower() + ','
    arguments += name + ','
    for dim in dimension.keys():
        arguments += dim + ','
    for dim in dimension.keys():
        arguments += dim.lower() + ','
    arguments = arguments[:-1]
    argument_string += 'DATA_TYPE POLYBENCH_{}D({})'.format(str(len(dimension)), arguments)
    return argument_string, name, dimension, arguments


def init_arrays(generated_code, arrays):
    """
    This code generates static declaration for the arrays in PolyBench style
    :param generated_code: list, list of strings of generated code
    :param arrays: list of tuples, information about array names and it's dimensions
    """
    whole_argument = ''
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        whole_argument += argument_string + ','
    whole_argument = whole_argument[:-1]
    generated_code.append('static void init_array({})'.format(whole_argument))

    generated_code.append('{')
    for array in arrays:
        argument_string, array_name, array_dim, _ = generate_argument_string(array)
        generated_code.append('int i,j,k,l;')
        for i in range(len(array_dim)):
            current_var = list(array_dim.keys())[i].lower()
            generated_code.append(
                'for ({} = 0; {} < {}; {}++) {{'.format(iterators[i], iterators[i], current_var, iterators[i]))
        generated_code.append(
            '{} = {};'.format(generate_array_reference(array_name, array_dim), random.randint(1, 100)))
        generated_code.append(r'}' * len(array_dim.keys()))
    generated_code.append('}')


def add_main_begining(generated_code):
    """
    This function add the begining of the main function
    :param generated_code: list, list of strings of generated code
    """
    generated_code.append('int main(int argc, char** argv)')
    generated_code.append('{')


def add_main_end(generated_code):
    """
    This function add the end of the main function
    :param generated_code: list, list of strings of generated code
    """
    generated_code.append('return 0;')
    generated_code.append('}')


def generate_source_code(kernel_name, arrays, folder):
    """
    All functions together in right order
    :param kernel_name: string, name of our computational kernel
    :param arrays: list of tuples, information about array names and it's dimensions
    :param folder: path, path to the folder with kernels
    :return: list, list of strings of generated code
    """
    generated_code = []
    add_includes(generated_code, kernel_name)
    init_arrays(generated_code, arrays)
    print_array(generated_code, arrays)
    add_main_begining(generated_code)
    code_vars = variable_assignment(generated_code, arrays)
    code_arrays = array_declaration(generated_code, arrays)
    init_and_kernel_call(generated_code, arrays, code_vars, kernel_name)
    prevent_elimination(generated_code, arrays)
    array_dealocation(generated_code, arrays)
    add_main_end(generated_code)
    generate_function_call(generated_code, kernel_name, code_vars, code_arrays, folder)
    return generated_code


def generate_header(kernel_name):
    header_code = ['#ifndef _{}_H'.format(kernel_name), '#define _{}_H'.format(kernel_name), header_string]
    return header_code


def generate_source_code_and_header(kernel_name, folder_name, arrays, writing_path):
    """
    This function creates codes for header and source file and writes them to correspoding files
    :param kernel_name: string, kernel name
    :param folder_name: path, path to the dir with source files
    :param arrays: list of tuples, information about array names and it's dimensions
    :param writing_path: path, path to the directory with target files
    """
    generated_code = generate_source_code(kernel_name, arrays, folder_name)
    header_code = generate_header(kernel_name)
    generated_code_path = os.path.join(writing_path, kernel_name + '.c')
    generated_header_path = os.path.join(writing_path, kernel_name + '.h')
    with open(generated_code_path, 'w') as f:
        for item in generated_code:
            f.write("%s\n" % item)
    with open(generated_header_path, 'w') as f:
        for item in header_code:
            f.write("%s\n" % item)




def get_array_information_from_json(file):
    arrays = []
    with open(file) as json_file:
        data = json.load(json_file)
    data = data[0]['arrays']
    for unprocessed_array in data:
        name = unprocessed_array[:unprocessed_array.find('[')]
        dim_string = unprocessed_array[unprocessed_array.find('[')+1:unprocessed_array.find(']')]
        dimensions = dim_string.split(',')
        dimension_dict = {}
        for idx, dim in enumerate(dimensions):
            dimension_dict[dimension_names[idx] +name] = dim

        arrays.append((name, dimension_dict))
    return arrays




x = get_array_information_from_json('/Users/Maxim/PycharmProjects/generator/input/test.json')
z = generate_source_code_and_header('test','/Users/Maxim/PycharmProjects/generator/src',x,'/Users/Maxim/PycharmProjects/generator')



y = 1