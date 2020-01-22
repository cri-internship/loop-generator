#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(610, "random");
	float *B = create_one_dim_float(940, "random");
	float **A = create_two_dim_float(470, 830, "random");

	for (int c = 1; c < 610; c++)
	  for (int b = 1; b < 610; b++)
	    for (int a = 1; a < 610; a++)
	    {
	      
	      C[a]=B[a];
	      C[a-1]=A[a][b];
	    }

    return 0;
}