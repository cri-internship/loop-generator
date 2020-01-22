#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(280, "ones");
	float **D = create_two_dim_float(870, 920, "ones");
	float ***A = create_three_dim_float(940, 50, 810, "ones");
	float **B = create_two_dim_float(700, 930, "ones");
	float *E = create_one_dim_float(720, "ones");

	for (int a = 5; a < 280; a++)
	{
	  
	    C[a]=C[a-3]+E[a]*A[a][a][a]/B[a][a];
	  
	    D[a][a]=D[a-4][a-2]/0.626;
	  
	    D[a][a]=D[a][a+1]-B[a][a]*C[a]/E[a];
	  
	    C[a]=D[a][a]/A[a][a][a];
	  
	    float var_a=B[a][a]*0.772;
	    float var_b=B[a+4][a+4]+0.351;
	  
	    float var_c=C[a]-0.999;
	}

    return 0;
}