import time
import datetime
import os
import glob


def get_timestamp():
    return str(datetime.datetime.now().timestamp())


def delete(path):
    path += '/*'
    files = glob.glob(path)
    for f in files:
        os.remove(f)


def get_timestr():
    return time.strftime("%Y%m%d-%H%M%S")


def do_for_all_files_in_directory(path, extension, f, *args):
    files = os.listdir(path)
    for item in files:
        if item.endswith(extension):
            target_path = os.path.join(path, item)
            f(target_path, *args)


def get_content(path):
    with open(path) as f:
        content = f.readlines()
    content = [x.strip() for x in content]
    return content
