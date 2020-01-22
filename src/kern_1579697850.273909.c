#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(840, "zeros");
	float **A = create_two_dim_float(830, 180, "zeros");

	for (int a = 4; a < 830; a++)
	{
	  
	    B[a]=B[a-2]-A[a][a];
	  
	    B[a]=B[a-1]/0.762;
	  
	    A[a][a]=A[a-2][a]*0.376;
	  
	    float var_a=B[a]/0.277;
	    float var_b=B[a-4]/0.421;
	}

    return 0;
}