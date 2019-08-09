import create_depen as cd


def create_cfile_head():
    """Read C functions from functions_for_c.txt and write it to feature.c """
    start_c = """#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    """

    with open(cd.file_name, 'w') as file:
        file.write(start_c)


def create_cfile_tail():
    """Append the end to the feature.c"""
    end_c = """
    return 0;
}"""
    with open(cd.file_name, 'a+') as file:
        file.write(end_c)


if __name__ == '__main__':
    cd.parse_input()

    create_cfile_head()
    cd.init_arrays()

    cd.create_nested_loop()

    create_cfile_tail()
