from auxillary_functions import get_content, do_for_all_files_in_directory, delete
from settings import src_path


def check_code_for_correctness(path):
    content = get_content(path)
    if content[-1][-1] != '}':  # last character of a file
        delete(path)


def main():
    do_for_all_files_in_directory(src_path, '.c', check_code_for_correctness)


if __name__ == '__main__':
    main()
