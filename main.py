def flow_dependency(array_name):
    result = f'{array_name}={do_random()}\n' \
             f'{do_random()}={array_name}'
    return result

def anti_dependency(array_name):
    result = f'{do_random()}={array_name}\n' \
            f'{array_name}={do_random()}'
    return result

def output_dependency(array_name):
    result = f'{array_name}={do_random()}\n' \
             f'{array_name}={do_random()}'
    return result

def input_dependency(array_name):
    result = f'{do_random}={array_name}\n' \
             f'{do_random}={array_name}'
    return result

def do_random():
    pass


if __name__=='__main__':
    print(flow_dependency("A[i][j]"))
    print(anti_dependency("A[i][j]"))
    print(output_dependency("A[i][j]"))
    print(input_dependency("A[i][j]"))



