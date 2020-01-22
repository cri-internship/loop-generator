#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(270, "zeros");
	int **B = create_two_dim_int(310, 590, "zeros");
	int *D = create_one_dim_int(90, "zeros");
	int *A = create_one_dim_int(510, "zeros");

	for (int c = 1; c < 267; c++)
	  for (int b = 1; b < 267; b++)
	    for (int a = 1; a < 267; a++)
	    {
	      
	      C[a]=23;
	      C[a+3]=3;
	      
	      int var_a=C[a]*50;
	      int var_b=C[a-1]-48;
	    }

    return 0;
}