#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(60, "random");
	float *E = create_one_dim_float(600, "random");
	float **B = create_two_dim_float(230, 30, "random");
	float *A = create_one_dim_float(390, "random");
	float *C = create_one_dim_float(180, "random");

	for (int a = 5; a < 60; a++)
	{
	  
	    D[a]=D[a-4]/C[a]+B[a][a]-A[a];
	  
	    B[a][a]=B[a+1][a+1]/0.763;
	  
	    A[a]=A[a+2]-0.819+E[a]/E[a];
	  
	    float var_a=B[a][a]-0.45;
	    float var_b=B[a-5][a-1]-0.6;
	}

    return 0;
}