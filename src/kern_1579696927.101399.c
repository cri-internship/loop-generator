#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "ones");
	float *A = create_one_dim_float(750, "ones");
	float **C = create_two_dim_float(770, 30, "ones");

	for (int a = 4; a < 750; a++)
	{
	  
	    A[a]=A[a-4]+C[a][a]*B[a];
	  
	    C[a][a]=C[a][a+1]+0.469;
	  
	    float var_a=C[a][a]*0.784;
	    float var_b=C[a+2][a+1]/0.96;
	}

    return 0;
}