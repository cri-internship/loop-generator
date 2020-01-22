#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(140, 810, 800, "zeros");
	float *A = create_one_dim_float(830, "zeros");

	for (int a = 4; a < 140; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-1][a-3]+A[a];
	  
	    B[a][a][a]=B[a-4][a-2][a-1]/A[a];
	}

    return 0;
}