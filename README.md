# loop-generator

#### To connect library init_dyn_array.h:
cd init_array_lib </br>
gcc -fPIC -c init_dyn_array.c </br>
ar rcs lib_init_dyn_array.a init_dyn_array.o 

##### create_random_kernels.py:
run for generating random loops. It's possible to set max parameters for amount of array, dims, dim size, loop nest depth. All these parameters are chosen randomly. Every dim of every array will have the same size.
##### create_kernels_with_deps.py:
