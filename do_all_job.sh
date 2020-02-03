#!/bin/sh
python generate_json.py
python generate_c_code.py
python process_generated_code.py