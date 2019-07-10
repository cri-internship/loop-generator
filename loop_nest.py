import loops_gen as lg


def create_cfile_head():
    start_c = """#include <stdio.h>

int main( int argc, const char* argv[] )
{
"""
    with open('src/feature1.c', 'w') as file:
        file.write(start_c)


def create_cfile_tail():
    end_c = """
    return 0;
}"""
    with open('src/feature1.c', 'a+') as file:
        file.write(end_c)


if __name__ == '__main__':

    create_cfile_head()
    print("fhj"+5)

    for d in range(1,4):
        lg.depth_loop(d, 6)
   # for i in range(2, 5):  # range(2, 2**15+1)
    #    """loop nest iterations"""
     #   lg.inner_loop(i)

    create_cfile_tail()
