from typing import Tuple
from auxillary_functions import get_timestamp
import cgen as c

from code_settings import array_init_functions, array_dealloc_functions


class WriteToFile:
    def __init__(self, expression, arrays, data_type, init_with):
        self.file_name = self.create_file_name()
        self.create_c_file(expression, arrays, data_type, init_with)

    def create_c_file(self, expression, arrays, data_type, init_with):
        self.create_cfile_head()
        for item in arrays.items():  # todo
            array_name = item[0]
            array_sizes = item[1]
            self.write_init_dyn_array(array_name, array_sizes, data_type=data_type,
                                      init_with=init_with)
        self.add_time()
        self.append_sequence_of_text(expression)
        self.create_cfile_tail()
        for item in arrays.items():
            array_name = item[0]
            array_sizes = item[1]
            self.write_dealloc_array(array_name, array_sizes)
        self.create_cfile_tail_1()

    def append_text_to_file(self, text):
        file_name = self.file_name
        with open(file_name, 'a+') as file:
            file.write(text)

    def append_sequence_of_text(self, sequence):
        """ Given a sequence of string expression append them to the specified file."""
        file_name = self.file_name
        with open(file_name, 'a+') as file:
            file.write('\n\n')
            for line in sequence:
                file.write('\t{}\n'.format(line))

    def write_init_dyn_array(self, array_name: str, array_sizes: Tuple,
                             data_type='float',
                             init_with='random'):
        """
        Example:
            in: 'A', (16,32,64), './output/tmp.py', typ='int', init_with='zeros'
                init array = 'int ***A = create_three_dim_int(16, 32, 64, "zeros");'

        """
        if len(array_sizes) == 1:
            arr_sizes = str(array_sizes)[1:-2]  # remove the parenthesis and last comma
        else:
            arr_sizes = str(array_sizes)[1:-1]  # remove only the parenthesis

        init_array = c.Statement(
            '\n\t{} {}{} = {}{}({}, "{}")'.format(data_type, '*' * len(array_sizes), array_name,
                                                  array_init_functions[len(array_sizes)],
                                                  data_type, arr_sizes, init_with))

        self.append_text_to_file(str(init_array))

    def write_init_static_array(self, array_name, array_sizes, data_type='int'):
        number_of_dimensions = len(array_sizes)
        if number_of_dimensions == 1:
            init_array = c.Statement(
                '\n\t {} {}[{}] = {{0}}'.format(data_type, array_name, *array_sizes))
        elif number_of_dimensions == 2:
            init_array = c.Statement(
                '\n\t {} {}[{}][{}] = {{0}}'.format(data_type, array_name, *array_sizes))
        else:
            init_array = c.Statement(
                '\n\t {} {}[{}][{}][{}] = {{0}}'.format(data_type, array_name, *array_sizes))
        print("init_array", str(init_array))

        self.append_text_to_file(str(init_array))

    def write_dealloc_array(self, array_name, array_sizes):
        number_of_dimensions = len(array_sizes)
        if number_of_dimensions == 1:
            dealloc_array = c.Statement(
                '\n\t{}({})'.format(array_dealloc_functions[number_of_dimensions],
                                    array_name))
        else:
            dealloc_array = c.Statement(
                '\n\t{}({}, {})'.format(array_dealloc_functions[number_of_dimensions],
                                        array_name,
                                        str(array_sizes)[1:-1]))
        self.append_text_to_file(str(dealloc_array))

    def create_cfile_head(self):
        """Read C functions from functions_for_c.txt and write it to feature.c """
        head = """#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"
#include "../pips_lib/define_script.h"


int main(int argc, const char* argv[])
{
    srand(time(NULL));
        """

        self.append_text_to_file(str(head))

    def add_time(self):
        statement = """
    clock_t start = clock();"""
        self.append_text_to_file(str(statement))

    def create_cfile_tail(self):
        """Append the end to the feature.c"""
        end_c = """
    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); """
        self.append_text_to_file(str(end_c))

    def create_cfile_tail_1(self):  # todo rename
        return_c = '''
    return 0; 
}'''

        self.append_text_to_file(str(return_c))

    def create_file_name(self):
        extension = '.c'
        prefix = 'src/kern_'
        file_name = prefix + get_timestamp() + extension
        return file_name
