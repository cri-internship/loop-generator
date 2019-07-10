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
    for_loop = c.FunctionBody(
        c.FunctionDeclaration(c.Value("void", "for_loop"), [c.Value('int', 'n'),]),
        c.Block([
            c.For('i = 0', 'i < ' + str(n), 'i++', c.Statement('cout << "hello world"')),
            ])
        )

    print(for_loop, '\n\n')

if __name__ == '__main__':
    for i in range(1,3):
        """loop nest depth"""
        number_of_iters(i)