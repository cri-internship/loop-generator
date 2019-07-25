from pycparser import c_ast


class MyVisitor(c_ast.NodeVisitor):
    def __init__(self):
        self.features_dict = {'loop depth': 0, 'unique arrays read': set(), 'unique arrays write': set(),
                              'statements per loop level': {}, 'unique arrays read per statement': {},
                              'dimensions per array read': {}, }
        self.current_stmt_num = 0
        self.current_parent = None

    def visit_For(self, node):
        self.features_dict['loop depth'] += 1
        current_loop_lvl = self.features_dict['loop depth'] - 1

        self.features_dict['statements per loop level'][current_loop_lvl] = 0

        self.generic_visit(node)

    def visit_Assignment(self, node):

        if type(self.current_parent) == c_ast.Compound or self.current_parent.stmt == node:
            current_loop_lvl = self.features_dict['loop depth'] - 1
            self.features_dict['statements per loop level'][current_loop_lvl] += 1

            if type(node.lvalue) == c_ast.ArrayRef:
                self.features_dict['unique arrays write'].add(count_arrays_write(node.lvalue))

            tmp = {}
            count_arrays_read(node.rvalue, tmp)

            self.features_dict['dimensions per array read'].update(tmp)

            self.features_dict['unique arrays read per statement'][self.current_stmt_num] = len(tmp)

            self.features_dict['unique arrays read'].update(tmp.keys())
            self.current_stmt_num += 1

    def print_features(self):
        for key, value in self.features_dict.items():
            if type(value) == set:
                print(f'{key}:{len(value)}')
            else:
                print(f'{key}:{value}')

    def generic_visit(self, node):
        """ Called if no explicit visitor function exists for a
            node. Implements preorder visiting of the node.
        """
        oldparent = self.current_parent
        self.current_parent = node
        for c in node:
            self.visit(c)
        self.current_parent = oldparent


def count_arrays_read(node, array_dims):
    try:
        if type(node.left) != c_ast.Constant and type(node.left) != c_ast.ID:
            count_arrays_read(node.left, array_dims)
        if type(node.right) != c_ast.Constant and type(node.right) != c_ast.ID:
            count_arrays_read(node.right, array_dims)
    except AttributeError:
        if type(node) == c_ast.ArrayRef:
            counter = 1
            while type(node.name) != c_ast.ID:
                node = node.name
                counter += 1

            array_dims[node.name.name] = counter


def count_arrays_write(node):
    if type(node.name) == c_ast.ID:
        return f'{node.name.name}'
    else:
        return count_arrays_write(node.name)
