#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(230, "ones");
	float **B = create_two_dim_float(230, 40, "ones");

	for (int a = 4; a < 225; a++)
	{
	  
	    B[a][a]=B[a][a-2]/0.445;
	  
	    A[a]=A[a-4]-0.865;
	  
	    A[a]=A[a+3]/B[a][a];
	  
	    float var_a=B[a][a]/0.804;
	    float var_b=B[a+5][a]/0.503;
	  
	    float var_c=B[a][a]+0.539;
	    float var_d=B[a-4][a-1]*0.831;
	}

    return 0;
}