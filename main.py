
import sys

from pycparser import parse_file
import loopVisitor as lv


if __name__ == "__main__":
    if len(sys.argv) > 2:
        filename = sys.argv[1]
    else:
        filename = 'examples/if_loop.c'

    ast = parse_file(filename, use_cpp=True)
    myVisitor = lv.MyVisitor()
    myVisitor.visit(ast)
    myVisitor.print_features()
