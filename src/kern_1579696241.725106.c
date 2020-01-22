#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(810, "zeros");
	float ***A = create_three_dim_float(60, 930, 860, "zeros");
	float **B = create_two_dim_float(440, 990, "zeros");

	for (int a = 5; a < 60; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-5][a-1]/C[a]+B[a][a];
	  
	    B[a][a]=B[a+1][a+5]-A[a][a][a]+0.934;
	  
	    B[a][a]=C[a]-A[a][a][a];
	  
	    A[a][a][a]=B[a][a]-C[a];
	  
	    float var_a=C[a]+0.361;
	    float var_b=C[a-5]/0.315;
	}

    return 0;
}