from auxillary_functions import delete
from settings import src_path, json_input_path


def main():
    delete(src_path)
    delete(json_input_path)


if __name__ == '__main__':
    main()
