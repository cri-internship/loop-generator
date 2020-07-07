import sys

import loops_dependencies as ld_gen


class CreateKernelsWithDeps:
    def __init__(self, loops_dependencies):
        self.ld = loops_dependencies

    def create_cfile_head(self):
        """Read C functions from functions_for_c.txt and write it to feature.c """
        start_c = """#include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include "../init_array_lib/init_dyn_array.h"
    
    
    int main( int argc, const char* argv[] )
    {
        srand(time(NULL));
    
        """

        with open(self.ld.result_c_file, 'w') as file:
            file.write(start_c)

    def add_time(self):
        statement = """
        clock_t start = clock();"""
        with open(self.ld.result_c_file, 'a') as file:
            file.write(statement)

    def create_cfile_tail(self):
        """Append the end to the feature.c"""
        end_c = """
        clock_t stop = clock();
        double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
        printf("%f", elapsed); """

        return_c = '''
        return 0; 
        }'''

        with open(self.ld.result_c_file, 'a+') as file:
            file.write(end_c)

        self.ld.dealloc_arrays()

        with open(self.ld.result_c_file, 'a+') as file:
            file.write(return_c)


if __name__ == '__main__':
    filename = sys.argv[1]
    loops_dependencies = ld_gen.LoopsDependencies(filename)
    create_kernel_with_deps = CreateKernelsWithDeps(loops_dependencies)

    create_kernel_with_deps.ld.parse_input()
    create_kernel_with_deps.create_cfile_head()
    create_kernel_with_deps.ld.init_dyn_arrays()  # TODO: ADD DYN INIT SUPPORT LATER
    # ld.init_static_arrays()
    create_kernel_with_deps.add_time()
    create_kernel_with_deps.ld.create_nested_loop()
    create_kernel_with_deps.create_cfile_tail()
