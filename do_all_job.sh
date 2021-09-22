#!/bin/sh
rm input/*
rm poly_code/*
python3 generate_json.py
python3 generate_c_code.py
