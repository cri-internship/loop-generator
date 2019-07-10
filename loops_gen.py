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


def outher_loop(d, i):
    """:arg d: the loop nest depth"""
    assert (d, i) > (0, 0)

    if d == 1:
        return inner_loop(i)
    else:
        return c.For('int i = 0', 'i < ' + str(i), 'i++', outher_loop(d - 1, i))


def depth_loop(d, i):
    with open('src/feature1.c', 'a+') as file:
        for line in str(outher_loop(d, i)).splitlines():
            file.write('\t' + line + '\n')
