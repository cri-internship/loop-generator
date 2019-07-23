from __future__ import print_function
import sys
from io import StringIO
from venv import logger

from pycparser import c_parser
from pycparser import parse_file


def get_ast(file_name):
    try:
        ast = parse_file(file_name, use_cpp=True)
    except c_parser.ParseError:
        e = sys.exc_info()[1]
        logger.error("Parse error: {0}.".format(str(e)))
        return

    string_io = StringIO()
    ast.show()
    logger.info("{0} successfully parsed:\n{1}".format(file_name, string_io.getvalue()))
    return ast


if __name__ == "__main__":
    if len(sys.argv) > 2:
        filename = sys.argv[1]
    else:
        filename = 'examples/if_loop.c'

    get_ast(filename)
