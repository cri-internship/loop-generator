from pycparser import c_ast


class MyVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.features_dict = {'loop depth': 0, 'unique arrays read': set(), 'unique arrays write': set(),
                              'statements per loop level': {}, 'unique arrays read per statement': {},
                              'dimensions per array read': 0, }
        self.loop_lvl = 0
        self.stmt_num = 0

    def visit_For(self, node):
        self.features_dict['loop depth'] += 1
        self.features_dict['statements per loop level'][self.loop_lvl] = 0
        self.loop_lvl += 1
        self.generic_visit(node)

    def visit_Assignment(self, node):
        self.features_dict['statements per loop level'][self.loop_lvl - 1] += 1
        self.features_dict['unique arrays write'].add(count_arrays_write(node.lvalue))
        count_arrays_read(node.rvalue, self.features_dict['unique arrays read'])
        self.features_dict['unique arrays read per statement'][self.stmt_num] = set()
        count_arrays_read(node.rvalue, self.features_dict['unique arrays read per statement'][self.stmt_num])
        self.stmt_num += 1

    def print_features(self):
        for key, value in self.features_dict.items():
            print(f'{key}:{value}')


def count_arrays_write(node):
    if type(node.name) == c_ast.ID:
        return f'{node.name.name}'
    if type(node.name) != c_ast.ID:
        return count_arrays_write(node.name)


def count_arrays_read(node, tmp):
    try:
        if type(node.left) != c_ast.Constant:
            count_arrays_read(node.left, tmp)
        if type(node.right) != c_ast.Constant:
            count_arrays_read(node.right, tmp)
    except AttributeError:
        while type(node.name) != c_ast.ID:
            node = node.name
        tmp.add(node.name.name)



