# Loop nest generator

#### Library init_dyn_array.c:
C library contents implementation of functions, which init one/two/three dimensional arrays with float/double/int values.
Possible values are: zeros, ones or random. 

###### To connect library:
> cd init_array_lib </br>
> gcc -fPIC -c init_dyn_array.c </br>
> ar rcs lib_init_dyn_array.a init_dyn_array.o 

### master branch
##### create_kernels_with_deps.py:

##### input.json




##### create_random_kernels.py:
run for generating random loops. It's possible to set max parameters for amount of array, dims, dim size, loop nest depth. All these parameters are chosen randomly. Every dim of every array will have the same size.

