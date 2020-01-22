#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(130, 780, "ones");
	float *B = create_one_dim_float(150, "ones");
	float *A = create_one_dim_float(890, "ones");

	for (int a = 4; a < 130; a++)
	{
	  
	    A[a]=A[a+2]/C[a][a];
	  
	    C[a][a]=0.68;
	    C[a-3][a]=0.204;
	  
	    float var_a=C[a][a]*0.89;
	    float var_b=C[a-3][a-4]+0.811;
	}

    return 0;
}