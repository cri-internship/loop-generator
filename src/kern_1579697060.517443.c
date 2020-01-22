#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(340, 840, "zeros");
	float *B = create_one_dim_float(200, "zeros");

	for (int a = 4; a < 200; a++)
	{
	  
	    A[a][a]=A[a][a-4]+0.362;
	  
	    B[a]=B[a-1]*0.486;
	  
	    A[a][a]=A[a-2][a-3]+B[a];
	  
	    A[a][a]=A[a-4][a-4]/0.097;
	  
	    float var_a=B[a]+0.389;
	    float var_b=B[a-4]+0.49;
	}

    return 0;
}