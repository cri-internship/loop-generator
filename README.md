# Loop nest generator

#### Library init_dyn_array.c:
C library contains implementation of C functions, which init one, two or three dimensional arrays with float, double or int values.
Possible values are: zeros, ones or random(float <1). 

###### To connect library:
> cd init_array_lib </br>
> gcc -fPIC -c init_dyn_array.c </br>
> ar rcs lib_init_dyn_array.a init_dyn_array.o 

### master branch
##### input.json:
_array_sizes_: variables for array sizes
_</br> type_: init array with type "float"/"double"/"int"
_</br> init_with_: init array with values "ones"/"zeros"/"random"
_</br> distances_: variables for distances
_</br> loop_nest_level_: int 
_</br> unique_arrays_write_: destination arrays/left-side arrays. Name and size. Variables from array_sizes can be used.
_</br> unique_arrays_read_: source arrays/right-side arrays. Name and size. Variables from array_sizes can be used.
_</br> dependencies_: list of each type of dependencies: flow/anti/input/output.
</br> Each dependency is described like:
        
        {
          "array_name": ,
          "distance": chain of distances(at least one). Variables from 'distances' can be used
          "mix_in": "num_val"/"random"
          "left_side_index": tuple with values to add/subtract from left-side indexes. 
        },
,where
</br> distance: describes the distance when dependency occurs(the same iteration means distance is 0)
</br> mix_in: statements can be filled with numerical values (no extra dependencies will be created) or random (it can contain numerical values as well as arrays, so new dependencies can be created)
</br> left_side_index: which indexes are expected for destination array(for flow and anti dependency), for first statement(for input and output dependencies)
   
Example "input.json":
you can find an example of input file "input/input.json"



##### create_random_kernels.py:
run for generating random loops. It's possible to set max parameters for amount of array, dims, dim size, loop nest depth. All these parameters are chosen randomly. Every dim of every array will have the same size.

