from settings import json_input_path, generation_script_path
from auxillary_functions import  do_for_all_files_in_directory
import os


def create_c_code_based_on_json(filename):
    script_path = generation_script_path
    os.system('python {} {}'.format(script_path, filename ))


def main():
    do_for_all_files_in_directory(json_input_path,'json', create_c_code_based_on_json)


if __name__ == '__main__':
    main()
