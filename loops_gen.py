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


def number_of_iters(n):
    """:arg n: number of iterations in the loop"""

    for_loop = c.For('int i = 0', 'i < ' + str(n), 'i++', c.Statement('printf("hello world")'))

    with open('src/feature1.c', 'a+') as file:
        for line in str(for_loop).splitlines():
            file.write('\t' + line + '\n')


def loop_depth(n):
    """:arg n: the loop nest depth"""
