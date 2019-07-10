import loops_gen as lg


def create_cfile_head():
    start_c = """#include <stdio.h>

int main( int argc, const char* argv[] )
{
"""
    with open('feature1.c', 'w') as file:
        file.write(start_c)


def create_cfile_tail():
    end_c = """
    return 0;
}"""
    with open('feature1.c', 'a+') as file:
        file.write(end_c)


if __name__ == '__main__':

    create_cfile_head()

    for i in range(2, 5):  # range(2, 2**15+1)
        """loop nest iterations"""
        lg.number_of_iters(i)

    create_cfile_tail()
