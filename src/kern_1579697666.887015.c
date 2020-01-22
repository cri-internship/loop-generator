#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(260, "ones");
	float *B = create_one_dim_float(160, "ones");
	float *C = create_one_dim_float(730, "ones");

	for (int a = 0; a < 258; a++)
	{
	  
	    A[a]=0.815;
	    A[a+2]=B[a];
	  
	    float var_a=A[a]*0.486;
	    float var_b=A[a]+0.704;
	}

    return 0;
}