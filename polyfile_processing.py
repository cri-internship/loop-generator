import random
from auxillary_functions import get_content
from auxillary_functions import rewrite
from settings import kernel_list
import os


def add_constant(filename):
    content = get_content(filename)
    start_index = False
    for idx, line in enumerate(content):
        if '#pragma scop' in line:
            start_index = True
        if '#pragma endscop' in line:
            start_index = False
        if start_index and line[-1] == ';':
            content[idx] = line[:-1] + '+' + str(random.randint(1, 100)) + ';'
    rewrite(filename, content)


def add_2D_tiling_label(filename):
    content = get_content(filename)
    start_index = False

    prev = 0
    next = 0

    for idx, line in enumerate(content):
        if '#pragma scop' in line:
            start_index = True
        if '#pragma endscop' in line:
            start_index = False
        if start_index and 'for' in line:
            prev = next
            next = idx

    content[prev] = 'tiling_2D: ' + content[prev]
    rewrite(filename, content)


def add_3D_tiling_label(filename):
    content = get_content(filename)
    start_index = False

    first = -1

    for idx, line in enumerate(content):
        if '#pragma scop' in line:
            start_index = True
        if '#pragma endscop' in line:
            start_index = False
        if start_index and 'for' in line:
            if first < 0:
                first = idx
    content[first] = '#pragma @ICE loop=tile ' + content[first]
    rewrite(filename, content)



def add_pragma(filename):
    content = get_content(filename)
    right_idx = 0
    for idx, line in enumerate(content):
        if 'clock_t start = clock();' in line:
            right_idx = idx+1
    content[right_idx] += '#pragma @ICE loop=tile'
    rewrite(filename, content)




def iterator_init(filename):
    content = get_content(filename)

    start = False
    start_index = 0

    for idx, line in enumerate(content):
        if '#pragma scop' in line:
            start = True
            start_index = idx
        if '#pragma endscop' in line:
            start = False

        if start and 'for (int' in line:
            content[idx] = line[:5] + line[8:]

    content.insert(start_index, 'int i,j,k,l;')

    rewrite(filename, content)


def get_kernel_name(input_file, target_file=kernel_list):
    name = './generated' + input_file[input_file.rfind('/'):]
    os.system('echo {} >> {}'.format(name, target_file))


def statement_deletion(filename):
    first_entry = True

    content = get_content(filename)
    start_index = False
    for idx, line in enumerate(content):
        if '#pragma scop' in line:
            start_index = True
        if '#pragma endscop' in line:
            start_index = False
        if start_index and line[-1] == ';' and first_entry == True:
            first_entry = False
        elif start_index and line[-1] == ';' and first_entry == False:
            content[idx] = ''
    rewrite(filename, content)


def bounds_processing(filename):
    content = get_content(filename)
    start_index = False
    for idx, line in enumerate(content):
        if '#pragma scop' in line:
            start_index = True
        if '#pragma endscop' in line:
            start_index = False

        if start_index and 'for' in line:
            bound = line[line.rfind('<') + 2:line.rfind(';')]
            if bound != '1024':
                content[idx] = line[:line.rfind('<') + 2] + '1024' + line[line.rfind(';'):]

    rewrite(filename, content)


def process_file(filename):
    iterator_init(filename)
    add_constant(filename)
    #add_2D_tiling_label(filename)
    add_3D_tiling_label(filename)
    get_kernel_name(filename)
    statement_deletion(filename)
    bounds_processing(filename)
    #add_pragma(filename)
