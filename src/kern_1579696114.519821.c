#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(560, "random");
	float *A = create_one_dim_float(860, "random");

	for (int a = 5; a < 560; a++)
	{
	  
	    A[a]=A[a-5]-0.913;
	  
	    A[a]=A[a-3]*B[a];
	  
	    B[a]=B[a-5]-0.552;
	  
	    B[a]=0.609;
	  
	    float var_a=A[a]-0.207;
	    float var_b=A[a-4]+0.47;
	  
	    B[a]=B[a]*0.256;
	    A[a]=B[a-1]+A[a];
	}

    return 0;
}