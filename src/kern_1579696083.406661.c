#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(1000, 140, "ones");
	float *B = create_one_dim_float(770, "ones");

	for (int a = 5; a < 770; a++)
	{
	  
	    A[a][a]=A[a][a-5]+B[a];
	  
	    float var_a=B[a]*0.722;
	    float var_b=B[a-4]*0.504;
	}

    return 0;
}