#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(950, 530, 280, "random");
	float ***D = create_three_dim_float(1000, 730, 170, "random");
	float *C = create_one_dim_float(100, "random");
	float *A = create_one_dim_float(800, "random");

	for (int a = 5; a < 100; a++)
	{
	  
	    A[a]=A[a-1]*0.487;
	  
	    D[a][a][a]=D[a+1][a+1][a+3]-B[a][a][a]*0.947;
	  
	    B[a][a][a]=B[a+2][a+3][a]*0.88-D[a][a][a]/A[a];
	  
	    C[a]=0.699;
	    C[a-3]=0.914;
	  
	    float var_a=D[a][a][a]*0.214;
	    float var_b=D[a-5][a-5][a-4]/0.283;
	}

    return 0;
}