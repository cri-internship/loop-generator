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


_</br> array_sizes:_variables for array sizes
_</br> type:_init array with type "float"/"double"/"int"
_</br> init_with:_init array with values "ones"/"zeros"/"random"
_</br> distances:_ variables for distances
_</br> loop_nest_level:_ int 
_</br> unique_arrays_write:_ destination arrays/left-side arrays
_</br> unique_arrays_read:_ source arrays/right-side arrays
_</br> dependencies:_ list of each type of dependencies: flow/anti/input/output.
Each dependency is described like:
        
        {
          "array_name": ,
          "distance": chain of distances(at least one)
          "mix_in": "num_val"/"random". To fill statements we can add nemurical values(no extra dependencies will be created) or random(it contains numerical values and arrays, so new dependencies can be created)
          "left_side_index": "(x, )"
        },
    
Example "input.json":
you can find an example of input file "input/input.json"



##### create_random_kernels.py:
run for generating random loops. It's possible to set max parameters for amount of array, dims, dim size, loop nest depth. All these parameters are chosen randomly. Every dim of every array will have the same size.

