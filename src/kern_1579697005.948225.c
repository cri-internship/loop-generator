#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(950, 400, "ones");
	float *B = create_one_dim_float(580, "ones");
	float *A = create_one_dim_float(500, "ones");

	for (int a = 5; a < 500; a++)
	{
	  
	    A[a]=0.996;
	    float  var_a=A[a]/0.666;
	  
	    B[a]=B[a+2]+C[a][a]-A[a];
	  
	    B[a]=0.931*C[a][a];
	  
	    float var_b=B[a]*0.058;
	    float var_c=B[a]+0.175;
	}

    return 0;
}