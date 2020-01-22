#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(40, 360, "random");
	float ***D = create_three_dim_float(830, 930, 720, "random");
	float **C = create_two_dim_float(160, 820, "random");
	float *A = create_one_dim_float(810, "random");

	for (int a = 4; a < 40; a++)
	{
	  
	    C[a][a]=C[a-3][a-1]/0.254;
	  
	    C[a][a]=C[a-4][a-2]-D[a][a][a]/B[a][a];
	  
	    A[a]=A[a-3]+0.792;
	  
	    B[a][a]=A[a]*C[a][a];
	    B[a-2][a-3]=D[a][a][a]+C[a][a];
	  
	    C[a][a]=A[a]*0.343-D[a][a][a];
	    A[a]=A[a+4]/D[a][a][a]*0.108;
	}

    return 0;
}