from generation_settings import json_input_path, PROJECT_PATH
import os


def create_code_based_on_json(directory, extension):
    files = os.listdir(directory)
    for item in files:
        if item.endswith(extension):
            target_path = os.path.join(directory, item)
            script_path = os.path.join(PROJECT_PATH, 'create_kernels_with_deps.py')
            os.system('python {} {}'.format(script_path, target_path))


def main():
    create_code_based_on_json(json_input_path, 'json')


if __name__ == '__main__':
    main()
