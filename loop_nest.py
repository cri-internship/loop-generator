import loops_gen as lg
import random


def create_cfile_head():

    with open('functions_for_c', 'r') as file:
        functions = file.read()

    with open('src/feature1.c', 'w') as file:
        file.write(functions)


def create_cfile_tail():
    end_c = """
    return 0;
}"""
    with open('src/feature1.c', 'a+') as file:
        file.write(end_c)


if __name__ == '__main__':
    create_cfile_head()
    #loop_nest_depth = random.randint(1, 5)
    #number_of_iterations = random.randint(1, 10)

    #lg.depth_loop(loop_nest_depth, number_of_iterations)

    create_cfile_tail()
