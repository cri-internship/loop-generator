from pycparser import c_ast


class MyVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.features_dict = {'loop depth': 0, 'unique arrays read': 0, 'unique arrays write': set(),
                              'statements per loop level': {}, 'unique arrays read per statement': 0,
                              'dimensions per array read': 0, }
        self.loop_lvl = 0

    def visit_For(self, node):
        self.features_dict['loop depth'] += 1
        self.loop_lvl += 1
        self.features_dict['statements per loop level'][self.loop_lvl] = 0
        self.generic_visit(node)

    def visit_Assignment(self, node):
        self.features_dict['statements per loop level'][self.loop_lvl] += 1
        self.features_dict['unique arrays write'].add(count_array_write(node.lvalue))

    def print_features(self):
        for key, value in self.features_dict.items():
            print(f'{key}:{value}')


def count_array_write(node):
    if type(node.name) == c_ast.ID:
        return f'{node.name.name}'
    if type(node.name) != c_ast.ID:
        return count_array_write(node.name)
