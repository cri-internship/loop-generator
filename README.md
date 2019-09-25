# Loop nest generator
Naive code generation quickly creates a huge amount of useless programs with repetitive or unwanted 
properties. Therefore, in our work, we have focused on automatic code generation of C loops with 
specified properties, like: loop data dependencies(flow, anti, input, output), array reads, array writes, 
loop nest level, which can be extended in the future. Program optimizes an amount of statements, checking if 
it is already exists.

## Built With:
python3.7
</br>cgen

## Getting Started
#### Library init_dyn_array.c:
C library contains implementation of C functions, which init one, two or three dimensional arrays with float,
double or int values. Possible values are: zeros, ones or random(float <1). 

###### To connect library:
> cd init_array_lib </br>
> gcc -fPIC -c init_dyn_array.c </br>
> ar rcs lib_init_dyn_array.a init_dyn_array.o 

##### input.json:
To provide code features, it is necessary to write an "input/input.json".

          {
          "array_sizes": variables for array sizes
          "type": init array with type float/double/int
          "init_with": init array with values ones/zeros/random
          "distances": variables for distances 
          "loop_nest_level": int number
          "unique_arrays_write": destination arrays(left-side arrays). Name and size (variables from array_sizes can be used)
          "unique_arrays_read": source arrays(right-side arrays). Name and size (variables from array_sizes can be used)
          "dependencies": list of each type of dependencies: flow/anti/input/output.
          }
Each dependency is described like:
        
        {
          "array_name": ,
          "distance": chain of distances(at least one). Variables from 'distances' can be used
          "mix_in": num_val/random
          "left_side_index"(optional): tuple with values to add/subtract from left-side indexes. 
        },
, where
_</br> distance_: describes the distance in dependency between iterations (the same iteration means distance is 0)
_</br> mix_in_: statements can be filled with numerical values (no extra dependencies will be created) or 
random (it can contain numerical values as well as arrays, so new dependencies can be created)
_</br> left_side_index_: which indexes are expected for destination array(for flow and anti dependencies), 
for first statement(for input and output dependencies). By default it is 0.
   
You can find an example of input file "input/input.json"

Run 'create_kernels_with_deps.py', which uses 'input/input.json'. There is a Makefile, which can compile all
C files from 'src' folder and add an executable programs to 'obj' folder. 



##### create_random_kernels.py:
run for generating random loops. It's possible to set max parameters for amount of array, dims, dim size, 
loop nest depth. All these parameters are chosen randomly. Every dim of every array will have the same size.

