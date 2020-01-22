#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(160, "ones");
	float *A = create_one_dim_float(160, "ones");
	float *B = create_one_dim_float(220, "ones");

	for (int a = 5; a < 160; a++)
	{
	  
	    B[a]=B[a-5]/C[a]*A[a];
	  
	    C[a]=B[a];
	    A[a]=C[a]+A[a];
	  
	    float var_a=C[a]*0.838;
	    C[a]=0.125;
	  
	    A[a]=B[a]-C[a];
	}

    return 0;
}