from settings import json_input_path, generation_script_path, src_path, target_path
from auxillary_functions import do_for_all_files_in_directory
import os
from polybench_files_generation import polybench_pipeline_single_file
from preprocess_original_file import process_file, create_file_for_parsing


def create_c_code_based_on_json(filename):
    script_path = generation_script_path
    os.system('python3 {} {}'.format(script_path, filename))


def main():
    do_for_all_files_in_directory(json_input_path, 'json', create_c_code_based_on_json)
    do_for_all_files_in_directory(src_path, '.c', polybench_pipeline_single_file, json_input_path, src_path,
                                 target_path)
    do_for_all_files_in_directory(src_path, '.c', process_file)
    do_for_all_files_in_directory(src_path, '.c', create_file_for_parsing)


if __name__ == '__main__':
    main()
