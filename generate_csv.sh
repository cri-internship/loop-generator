#!/bin/bash

for file in *.c; do
	python3 main.py $file
done