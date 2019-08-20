import loops_dependencies as ld

def create_cfile_head():
    """Read C functions from functions_for_c.txt and write it to feature.c """
    start_c = """#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    """

    with open(ld.result_c_file, 'w') as file:
        file.write(start_c)


def create_cfile_tail():
    """Append the end to the feature.c"""
    end_c = """
    return 0;
}"""
    with open(ld.result_c_file, 'a+') as file:
        file.write(end_c)


if __name__ == '__main__':
    ld.parse_input()
    create_cfile_head()
    ld.init_arrays()
    ld.create_nested_loop()
    create_cfile_tail()
