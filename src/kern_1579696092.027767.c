#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(770, "random");
	int *C = create_one_dim_int(460, "random");
	int *B = create_one_dim_int(500, "random");
	int **A = create_two_dim_int(890, 810, "random");
	int *E = create_one_dim_int(140, "random");

	for (int c = 3; c < 138; c++)
	  for (int b = 3; b < 138; b++)
	    for (int a = 3; a < 138; a++)
	    {
	      
	      E[a]=E[a-3]*31;
	      
	      D[a]=D[a]*B[a]+A[a][b];
	      D[a]=C[a]+E[a]*25;
	      
	      E[a]=E[a+2]+22;
	      
	      int var_a=B[a]-15;
	      int var_b=B[a+2]*50;
	    }

    return 0;
}