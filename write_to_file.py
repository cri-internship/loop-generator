from typing import Tuple

import cgen as c

class WriteToFile:
    #todo this functions should not need to know loops_dependencies, it's just a string to write!!!
    def __init__(self, loops_dependencies):
        self.ld = loops_dependencies

    def create_nested_loop_1(self, string_to_write):
        """
        ['for (int d = 3; d < 64; d++)', '  for (int c = 4; c < 16; c++)', '    for (int b = 5; b < 16; b++)', '      for (int a = 5; a < 16; a++)', '      {', '        ', '       C[a][b][c]=C[a-5][b-4][c-3]-A[a][b];', '        ', '       B[a][b]=B[a][b+2]*50;', '        ', '       A[a][b]=A[a+5][b+2]-B[a][b];', '        ', '       A[a][b]=B[a][b];', '        ', '       B[a][b]=31;', '      }']
        if printed element by element
        for (int d = 3; d < 64; d++)
        for (int c = 4; c < 16; c++)
        for (int b = 5; b < 16; b++)
          for (int a = 5; a < 16; a++)
          {

           C[a][b][c]=C[a-5][b-4][c-3]-A[a][b];

           B[a][b]=B[a][b+2]*50;

           A[a][b]=A[a+5][b+2]-B[a][b];

           A[a][b]=B[a][b];

           B[a][b]=31;
          }
        :return:
        """
        """
        Calls generate_nested_loops(d, i) and write it to file
        """
        with open(self.ld.result_c_file, 'a+') as file:
            file.write('\n\n')
            for line in string_to_write:  # todo: rewrite
                file.write('\t{}\n'.format(line))

    def write_init_dyn_array(self, array_name: str, array_sizes: Tuple[int], file, typ='float', init_with='random'):
        """
                int ***A = create_three_dim_int(16, 64, 64, "zeros");

        :param array_name: str C || A
        :param array_sizes: Tuple[int] (524288,) || (16, 64, 64)
        :param file:
        :param typ:
        :param init_with:
        :return:
        """
        """Write declaration and calling functions to init arrays to file"""
        print("init_with ", init_with)
        if type(array_sizes) == tuple and len(array_sizes) == 1:  # todo why is there a difference in [1:-2] [1:-1]
            init_array = c.Statement('\n\t{} {}{} = {}{}({}, "{}")'.format(typ, '*' * len(array_sizes), array_name,
                                                                           self.ld.array_init_functions[len(array_sizes)],
                                                                           typ,
                                                                           str(array_sizes)[1:-2], init_with))
        else:
            init_array = c.Statement('\n\t{} {}{} = {}{}({}, "{}")'.format(typ, '*' * len(array_sizes), array_name,
                                                                           self.ld.array_init_functions[len(array_sizes)],
                                                                           typ,
                                                                           str(array_sizes)[1:-1], init_with))
        print('init_array ', init_array)
        with open(file, 'a+') as file:
            file.write(str(init_array))

    def write_init_static_array(self, array_name, array_sizes, file, typ='int'):  # todo never invoked
        print("array_name", array_name, type(array_name))
        print("array_sizes", array_sizes, type(array_sizes))

        number_of_dimensions = len(array_sizes)
        if number_of_dimensions == 1:
            init_array = c.Statement('\n\t {} {}[{}] = {{0}}'.format(typ, array_name, *array_sizes))
        elif number_of_dimensions == 2:
            init_array = c.Statement('\n\t {} {}[{}][{}] = {{0}}'.format(typ, array_name, *array_sizes))
        else:
            init_array = c.Statement(
                '\n\t {} {}[{}][{}][{}] = {{0}}'.format(typ, array_name, *array_sizes))
        print("init_array", str(init_array))

        with open(file, 'a+') as file:
            file.write(str(init_array))

    def write_dealloc_array(self, array_name, array_sizes, file):
        number_of_dimensions = len(array_sizes)
        if number_of_dimensions == 1:
            dealloc_array = c.Statement(
                '\n\t{}({})'.format(self.ld.array_dealloc_functions[number_of_dimensions], array_name))
        else:
            dealloc_array = c.Statement(
                '\n\t{}({}, {})'.format(self.ld.array_dealloc_functions[number_of_dimensions], array_name,
                                        str(array_sizes)[1:-1]))
        with open(file, 'a+') as file:
            file.write(str(dealloc_array))