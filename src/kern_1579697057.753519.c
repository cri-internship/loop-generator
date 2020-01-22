#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(940, "ones");
	float **A = create_two_dim_float(890, 800, "ones");
	float ***B = create_three_dim_float(810, 700, 140, "ones");

	for (int a = 4; a < 810; a++)
	{
	  
	    A[a][a]=A[a+3][a]*B[a][a][a]+C[a];
	  
	    C[a]=C[a+2]-0.378;
	  
	    C[a]=C[a+5]/0.568;
	  
	    A[a][a]=A[a+1][a+2]/B[a][a][a]-C[a];
	  
	    float var_a=B[a][a][a]/0.622;
	    float var_b=B[a-2][a][a-4]-0.456;
	}

    return 0;
}