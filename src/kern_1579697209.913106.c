#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(770, "ones");
	float **B = create_two_dim_float(800, 590, "ones");

	for (int a = 4; a < 769; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]-0.288;
	  
	    A[a]=A[a+1]/0.459;
	  
	    B[a][a]=0.034;
	}

    return 0;
}