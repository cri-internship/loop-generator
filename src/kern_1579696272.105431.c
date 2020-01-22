#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(140, "zeros");
	float *B = create_one_dim_float(320, "zeros");

	for (int a = 4; a < 140; a++)
	{
	  
	    B[a]=B[a+4]*0.294;
	  
	    float var_a=A[a]*0.915;
	    A[a]=0.729;
	  
	    A[a]=A[a]/B[a];
	    B[a]=A[a-1]/B[a];
	  
	    float var_d=B[a]*0.101;
	    float var_e=B[a-4]*0.361;
	}

    return 0;
}