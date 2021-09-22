import random
from auxillary_functions import get_content
from auxillary_functions import rewrite
from settings import kernel_list
import os


def add_includes(filename):
    content = get_content(filename)
    first_idx = 0
    second_idx = 0
    for idx, line in enumerate(content):
        if 'init_dyn_array.h' in line:
            first_idx = idx
        if 'define_script' in line:
            second_idx = idx

    content[first_idx] = "#include <init_dyn_array.h>"
    content[second_idx] = "#include <pips_runtime.h>"
    rewrite(filename, content)


def add_constant(filename):
    content = get_content(filename)
    start_index = False
    for idx, line in enumerate(content):
        if 'clock_t stop = clock();' in line:
            start_index = False

        if len(line) > 0:
            if start_index and line[-1] == ';':
                content[idx] = line[:-1] + '+' + str(random.randint(1, 100)) + ';'

        if 'clock_t start = clock();' in line:
            start_index = True

    rewrite(filename, content)


def add_3D_tiling_label(filename):
    content = get_content(filename)
    start_index = False
    first = -1
    for idx, line in enumerate(content):
        if 'clock_t start = clock();' in line:
            start_index = True
        if 'clock_t stop = clock();' in line:
            start_index = False
        if start_index and 'for' in line:
            if first < 0:
                first = idx
    content[first] = '#pragma @ICE loop=tile \n' + content[first]
    rewrite(filename, content)


def iterator_init(filename):
    content = get_content(filename)

    start = False
    start_index = 0

    for idx, line in enumerate(content):
        if 'clock_t start = clock();' in line:
            start = True
            start_index = idx
        if 'clock_t stop = clock();' in line:
            start = False

        if start and 'for (int' in line:
            content[idx] = line[:5] + line[8:]

    content.insert(start_index, 'int i,j,k,l;')

    rewrite(filename, content)


def get_kernel_name(input_file, target_file=kernel_list):
    name = './generated' + input_file[input_file.rfind('/'):]
    os.system('echo {} >> {}'.format(name, target_file))


def bounds_processing(filename):
    content = get_content(filename)
    start_index = False
    for idx, line in enumerate(content):
        if 'clock_t start = clock();' in line:
            start_index = True
        if 'clock_t stop = clock();' in line:
            start_index = False

        if start_index and 'for' in line:
            bound = line[line.rfind('<') + 2:line.rfind(';')]
            if bound != '1024':
                content[idx] = line[:line.rfind('<') + 2] + '1024' + line[line.rfind(';'):]

    rewrite(filename, content)


def preprocess_time(filename):
    content = get_content(filename)
    right_index = 0
    for idx, line in enumerate(content):
        if 'printf' in line:
            right_index = idx
    content[right_index] = 'printf("%7.5lf\\n",elapsed*1.0e3);'
    rewrite(filename, content)


def check_entrance(line):
    stop = ['include', 'clock', 'create', 'deallocate', 'srand', 'elapsed', 'pragma']
    for stop_word in stop:
        if stop_word in line:
            return False
    return True


def create_file_for_parsing(filename):
    path_for_parsing = filename[:-2] + '_parsing.c'
    content = get_content(filename)
    new_content = [line for line in content if check_entrance(line)]

    for_idx = 0
    for idx, line in enumerate(new_content[::-1]):
        if 'for' in line:
            for_idx = idx
            break

    tmp = new_content[len(new_content) - for_idx - 1]
    new_content[len(new_content) - for_idx - 1] = 'loop_1:' + tmp

    rewrite(path_for_parsing, new_content)


def process_file(filename):
    add_includes(filename)
    iterator_init(filename)
    add_constant(filename)
    add_3D_tiling_label(filename)
    get_kernel_name(filename)
    bounds_processing(filename)
    preprocess_time(filename)
