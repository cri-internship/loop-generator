import loops_gen as lg


def create_cfile_head():
    """Read C functions from functions_for_c.txt and write it to feature.c """
    with open('functions_for_c', 'r') as file:
        functions = file.read()

    with open('src/feature1.c', 'w') as file:
        file.write(functions)


def create_cfile_tail():
    """Append the end to the feature.c"""
    end_c = """
    return 0;
}"""
    with open('src/feature1.c', 'a+') as file:
        file.write(end_c)


if __name__ == '__main__':
    create_cfile_head()

   # lg.init_arrays()
    lg.create_nested_loop()

    create_cfile_tail()
