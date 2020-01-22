#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(530, 460, "ones");
	float *A = create_one_dim_float(890, "ones");
	float *B = create_one_dim_float(60, "ones");

	for (int a = 5; a < 60; a++)
	{
	  
	    B[a]=B[a-4]*0.034;
	  
	    C[a][a]=C[a-3][a-5]/A[a]-0.757;
	  
	    A[a]=A[a-1]+C[a][a]-B[a];
	  
	    C[a][a]=B[a]/A[a];
	  
	    B[a]=A[a];
	  
	    float var_a=B[a]*0.083;
	}

    return 0;
}