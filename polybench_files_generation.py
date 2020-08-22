def generate_source_code(kernel_name, arrays):
    generated_code = []
    add_includes(generated_code, kernel_name)

    generated_code.append('int main(int argc, char** argv)')
    generated_code.append('{')

    code_vars = variable_assignment(generated_code, arrays)
    array_declaration(generated_code, arrays)
    init_and_kernel_call(generated_code, arrays, code_vars, kernel_name)
    prevent_elimination(generated_code, arrays)
    array_dealocation(generated_code, arrays)
    generated_code.append('return 0;')
    return generated_code


def variable_assignment(generated_code, arrays):
    code_vars = []
    for array in arrays:
        dims = array[1]
        for key in dims.keys():
            code_var = key.lower()
            code_vars.append(code_var)
            header_var = key
            generated_code.append('{} = {};'.format(code_var, header_var))
    return code_vars


def array_declaration(generated_code, arrays):
    for array in arrays:
        array_name = array[0]
        dims = array[1]
        number_of_dims = len(dims)
        argument_string = ''
        for key in dims.keys():
            argument_string += key + ','
        for key in dims.keys():
            argument_string += key.lower() + ','
        argument_string = argument_string[:-1]
        generated_code.append(
            'POLYBENCH_{}D_ARRAY_DECL({}, DATA_TYPE,'.format(str(number_of_dims), array_name) + argument_string + ');')


def init_and_kernel_call(generated_code, arrays, code_vars, kernel_name):
    argument_string = ''
    for var in code_vars:
        argument_string += var + ','
    for array in arrays:
        argument_string += 'POLYBENCH_ARRAY({})'.format(array[0]) + ','
    argument_string = argument_string[:-1]
    generated_code.append('init_array({})'.format(argument_string))
    generated_code.append('kernel_{}({})'.format(kernel_name, argument_string))


def array_dealocation(generated_code, arrays):
    for array in arrays:
        generated_code.append('POLYBENCH_FREE_ARRAY({});'.format(array[0]))


def prevent_elimination(generated_code, arrays):
    array = arrays[0]
    argument_string = ''
    for dim in array[1]:
        argument_string += dim + ','
    argument_string += 'POLYBENCH_ARRAY({})'.format(array[0])
    generated_code.append('polybench_prevent_dce(print_array({}));'.format(argument_string))


def add_includes(generated_code, kernel_name):
    generated_code.append('#include <stdio.h>')
    generated_code.append('#include <unistd.h>')
    generated_code.append('#include <string.h>')
    generated_code.append('#include <math.h>')
    generated_code.append('#include <polybench.h>')
    generated_code.append('#include <stdio.h>')
    generated_code.append('#include "{}.h"'.format(kernel_name))


def print_array(generated_code, arrays):
    array_name = arrays[0][0]
    array_dim = arrays[0][1]
    argument_string = ''
    arguments = ''
    for dim in array_dim.keys():
        argument_string += 'int ' + dim.lower() + ','
    arguments += array_name
    for dim in array_dim.keys():
        arguments += dim + ','
    for dim in array_dim.keys():
        arguments += dim.lower() + ','
    arguments = arguments[:-1]
    argument_string += 'DATA_TYPE POLYBENCH_{}D({})'.format(str(len(array_dim)), arguments)
    generated_code.append('static void print_array({})'.format(argument_string))
    generated_code.append('{')
    generated_code.append('int i,j,k;')
    generated_code.append("POLYBENCH_DUMP_START;")
    generated_code.append("POLYBENCH_DUMP_BEGIN(\"{}\");".format(array_name))

    generated_code.append("POLYBENCH_DUMP_START;")
    generated_code.append("POLYBENCH_DUMP_BEGIN(\"{}\");".format(array_name))

    iterators = ['i', 'j', 'k']
    for i in range(len(array_dim)):
        current_var = list(array_dim.keys())[i].lower()
        generated_code.append(
            'for ({} = 0; {} < {}; {}++) {'.format(iterators[i], iterators[i], current_var, iterators[i]))

    generated_code.append('fprintf (POLYBENCH_DUMP_TARGET, "\n");')

    generated_code.append("POLYBENCH_DUMP_END(\"{}\");".format(array_name));
    generated_code.append("POLYBENCH_DUMP_FINISH;")
    generated_code.append("}")

x = generate_source_code()