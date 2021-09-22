import warnings
warnings.filterwarnings('ignore')
import sys
import os
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from math import floor, ceil
from pylab import rcParams
sys.path.append('/home/maksim/PycharmProjects/unrolling')
import ast
import matplotlib.pyplot as plt


path = '/home/maksim/Downloads/results/dependencies'


def extract_parameters(path):
    with open(path) as f:
        content = f.readlines()
    content = [x.strip() for x in content]
    content = [x for x in content if 'INFO save_final_config' in x]
    if len(content) > 1:
        content = content[-1]
        parameters = content[content.find("{"):]
        parameters = ast.literal_eval(parameters)
        parameters['shape'] = parameters.pop(129)
        parameters['global'] = parameters.pop(15)
        parameters['local'] = parameters.pop(21)
        parameters['size'] = parameters.pop(9)
        return parameters
    else:
        return None


def extract_parameters_all_files(path):
    params = []
    subfolders = [f.path for f in os.scandir(path) if f.is_dir()]
    for subfolder in subfolders:
        tmp_res = os.path.join(subfolder, 'results.txt')
        tmp_params = extract_parameters(tmp_res)
        if tmp_params != None:
            params.append(tmp_params)
    return params


params = extract_parameters_all_files(path)
shape = [0,0,0,0]
global_scanning = [0,0,0]
local_scanning = [0,0,0]
for param in params:
    shape[param['shape']] +=1
    global_scanning[param['global']] +=1
    local_scanning[param['local']] +=1

x = 5