import uuid

import cgen as c

"""
func = c.FunctionBody(
    c.FunctionDeclaration(c.Const(c.Pointer(c.Value("char", "greet"))), []),
    c.Block([
        c.Statement('return "hello world"'),
        c.Value('int', 'a'),
        c.Assign('a',5),
        c.If('a < 7', c.Statement('a++')),
        c.While('a < 100', c.Statement('return "hello world"')),
        c.For('i = 0', 'i < 9', 'i++', c.Statement('return "hello world"')),
        ])
    )

print(func)
"""


def inner_loop(i):
    """:arg i: number of iterations in the loop"""
    for_loop = c.For('int i = 0', 'i < ' + str(i), 'i++', c.Block([c.Statement('printf("hello world\\n")')]))

    return for_loop


def outer_loop(d, i):
    """:arg d: the loop nest depth
       :arg i: number of iterations
       recursively function to create for loop with depth d.
       The most inner loop calls function inner_loop
       :return for loop with depth d"""
    assert (d, i) > (0, 0)

    if d == 1:
        return inner_loop(i)
    else:
        return c.For('int i = 0', 'i < ' + str(i), 'i++', outer_loop(d - 1, i))


def depth_loop(d, i):
    """:arg d: loop nest depth
       :arg i: number of iterations
       calls outer_loop(d, i) and write it to file"""
    with open('src/feature1.c', 'a+') as file:
        for line in str(outer_loop(d, i)).splitlines():
            file.write('\t' + line + '\n')


def generate_loop_indexes(loop_level):
    first_iterator = 'a'
    calculated_iterator = chr(ord(first_iterator) + loop_level - 1)
    return calculated_iterator


def generate_file_name(feature_id):
    unique_identifier = uuid.uuid4()
    file_name = str(feature_id) + " " + str(unique_identifier)
    return file_name
