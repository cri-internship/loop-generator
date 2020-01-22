#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "zeros");
	float *B = create_one_dim_float(580, "zeros");

	for (int a = 2; a < 577; a++)
	{
	  
	    A[a]=A[a-2]+B[a];
	  
	    A[a]=A[a+1]*0.15;
	  
	    B[a]=B[a+3]/0.652;
	  
	    float var_a=A[a]-0.026;
	    float var_b=A[a+2]*0.179;
	  
	    float var_c=A[a]*0.363;
	    float var_d=A[a+3]-0.105;
	}

    return 0;
}