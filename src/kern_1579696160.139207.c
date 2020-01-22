#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(800, 260, 1000, "ones");
	float **A = create_two_dim_float(270, 800, "ones");
	float *C = create_one_dim_float(790, "ones");

	for (int a = 0; a < 265; a++)
	{
	  
	    C[a]=C[a+2]-0.952;
	  
	    C[a]=C[a+4]+0.897;
	  
	    A[a][a]=A[a+5][a+4]-B[a][a][a];
	  
	    float var_a=B[a][a][a]-0.431;
	    float var_b=B[a+4][a][a+2]/0.335;
	}

    return 0;
}