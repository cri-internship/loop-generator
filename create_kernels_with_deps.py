import json
import sys

import loops_dependencies as ld_gen
from auxillary_functions import get_timestamp
from parse_input import DataClass


def create_cfile_head(output_file):
    """Read C functions from functions_for_c.txt and write it to feature.c """
    start_c = """#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main(int argc, const char* argv[])
{
    srand(time(NULL));

    """

    with open(output_file, 'w') as file:
        file.write(start_c)


def add_time(output_file):
    statement = """
    clock_t start = clock();"""
    with open(output_file, 'a') as file:
        file.write(statement)


def create_cfile_tail(output_file):
    """Append the end to the feature.c"""
    end_c = """
    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); """
    with open(output_file, 'a+') as file:
        file.write(end_c)


def create_cfile_tail_1(output_file): #todo rename
    return_c = '''
    return 0; 
    }'''

    with open(output_file, 'a+') as file:
        file.write(return_c)


def read_file_data(filename):  # todo extract to file handling class
    with open(filename, 'r') as file:
        data = json.load(file)[0]
        return data


def create_file_name():
    extension = '.c'
    prefix = 'src/kern_'
    file_name = prefix + get_timestamp() + extension
    return file_name


if __name__ == '__main__':
    filename = sys.argv[1]
    input_data = read_file_data(filename)

    data = DataClass.from_dict(input_data)

    output_file = create_file_name()

    loops_dependencies = ld_gen.LoopsDependencies(data, output_file)

    create_cfile_head(output_file)
    loops_dependencies.init_dyn_arrays()
    add_time(output_file)
    loops_dependencies.create_nested_loop(output_file)
    create_cfile_tail(output_file)
    loops_dependencies.dealloc_arrays()
    create_cfile_tail_1(output_file)



