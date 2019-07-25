#!/bin/bash

for file in *.c; do
	python3 main.py $file | tr "\n" " " >> file.csv
	echo '' >> file.csv
done