import random
from auxillary_functions import get_content
from auxillary_functions import rewrite


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


def process_file(filename):
    add_constant(filename)
    add_2D_tiling_label(filename)

