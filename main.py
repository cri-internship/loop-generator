from __future__ import print_function
import sys

from pycparser import c_ast, parse_file


class MyVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.features_dict = {'loop depth': 0, 'unique arrays read': 0, 'unique arrays write': set(),
                              'statements per loop level': 0, 'unique arrays read per statement': 0,
                              'dimensions per array read': 0, }

    def visit_For(self, node):
        self.features_dict['loop depth'] += 1
        self.generic_visit(node)

    def visit_Assignment(self, node):
        self.features_dict['statements per loop level'] += 1
        self.features_dict['unique arrays write'].add(count_array_write(node.lvalue))


def count_array_write(node, dims=''):

    try:
        dims = f'[{node.subscript.name}]' + dims
    except AttributeError:
        dims = f'[{node.subscript.left.name}{node.subscript.op}{node.subscript.right.value}]' + dims
    if type(node.name) == c_ast.ID:
        return f'{node.name.name}{dims}'
    if type(node.name) != c_ast.ID:
        return count_array_write(node.name, dims)


def print_result(MyVisitor):
    for key, value in MyVisitor.features_dict.items():
        print(f'{key}:{value}')


if __name__ == "__main__":
    if len(sys.argv) > 2:
        filename = sys.argv[1]
    else:
        filename = 'examples/if_loop.c'

    ast = parse_file(filename, use_cpp=True)
    myVisitor = MyVisitor()
    myVisitor.visit(ast)
    print_result(myVisitor)
