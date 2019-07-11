import uuid

import cgen as c

import random

import numpy as np

"""
func = c.FunctionBody(
    c.FunctionDeclaration(c.Const(c.Pointer(c.Value("char", "greet"))), []),
    c.Block([
        c.Statement('return "hello world"'),
        c.Value('int', 'a'),
        c.Assign('a',5),
        c.If('a < 7', c.Statement('a++')),
        c.While('a < 100', c.Statement('return "hello world"')),
        c.For('i = 0', 'i < 9', 'i++', c.Statement('return "hello world"')),
        ])
    )

print(func)
"""
maths_operations = ['+', '-', '*', '/']  # random.choice(maths_operations.values())


def generate_nested_loops(d, i):
    """:arg d: the loop nest depth
       :arg i: number of iterations
       recursively function to create for loop with depth d.
       The most inner loop calls function inner_loop
       :return for loop with depth d"""
    assert (d, i) > (0, 0)  # todo move to the RANDOM generator
    loop_index = generate_loop_index(d)
    lower_bound = 0
    upper_bound = random.randint(lower_bound + 1, 50)
    inner_stmt = c.Block([c.Statement('printf("hello world\\n")')])

    if d == 1:
        return print_loop_structure(loop_index, lower_bound, upper_bound, inner_stmt)
    else:
        return print_loop_structure(loop_index, lower_bound, upper_bound, generate_nested_loops(d - 1, i))


def print_loop_structure(loop_index, lower_bound, upper_bound, fun):
    return c.For('int {} = {}'.format(loop_index, lower_bound),
                 '{} < '.format(loop_index)
                 + str(upper_bound),
                 '{}++'.format(loop_index),
                 fun)


def depth_loop(d, i):
    """:arg d: loop nest depth
       :arg i: number of iterations
       calls generate_nested_loops(d, i) and write it to file"""
    with open('src/feature1.c', 'a+') as file:
        for line in str(generate_nested_loops(d, i)).splitlines():
            file.write('\t' + line + '\n')


def generate_loop_index(loop_level):
    first_iterator = 'a'
    calculated_iterator = chr(ord(first_iterator) + loop_level - 1)
    return calculated_iterator


def generate_file_name(feature_id):
    unique_identifier = uuid.uuid4()
    file_name = str(feature_id) + " " + str(unique_identifier)
    return file_name


def generate_calculations():
    number_of_arrays = random.randint(1, 5)
    generated_arrays = {}
    for i in range(number_of_arrays + 1):
        generated_arrays[generate_loop_index(i)] = generate_array()
    return generated_arrays


def generate_array():
    func = c.FunctionBody(
        c.FunctionDeclaration(c.Pointer(c.Value("float", "create_one_dim")), [c.Value('int', 'size_dim1')]),
        c.Block([
            c.Statement(

                """ 
	   float *array = malloc(size_dim1 * sizeof(float));
	    
 
	   for (int i = 0; i<size_dim1; i++)
	         *(array+i) = (float) rand() / ((float) RAND_MAX + 1);  // OR *(arr+i) = ++count
	 
	   for (int i = 0; i < size_dim1; i++)
	         printf("%f ", array[i]);'
	         
	    return array"""),


            c.Assign('float *array', 'malloc(size_dim1 * sizeof(float))'),
            c.For('int i = 0', 'i < size_dim1', 'i++', c.Statement(' *(array+i) = (float) rand() / ((float) RAND_MAX + 1)')),
            c.For('int i = 0', 'i < size_dim1', 'i++', c.Statement('printf("%f ", array[i])')),
            c.Statement('return array'),

        ])
    )

    print(func)

""" DYNAMICAL ARRAYS IN C  

2DIM:
float (*a)[y] = malloc(sizeof(float[x][y]));
free(a);

3DIM
float (*a)[y][z] = malloc(sizeof(float[x][y][z]));
free(a)

"""

if __name__ == '__main__':
    generate_array()