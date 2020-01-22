#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(670, 10, "random");
	float **C = create_two_dim_float(810, 40, "random");
	float *B = create_one_dim_float(140, "random");
	float **D = create_two_dim_float(980, 400, "random");

	for (int a = 5; a < 138; a++)
	{
	  
	    D[a][a]=D[a-5][a-5]*0.074;
	  
	    B[a]=B[a+2]+A[a][a]-D[a][a];
	  
	    A[a][a]=A[a][a]-0.525;
	    D[a][a]=A[a-1][a-4]*0.613;
	  
	    B[a]=B[a]+D[a][a]/C[a][a]*A[a][a];
	    C[a][a]=B[a-1]+D[a][a]*0.713-C[a][a];
	  
	    float var_a=C[a][a]/0.969;
	    float var_b=C[a-1][a-5]+0.992;
	}

    return 0;
}