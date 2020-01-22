#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(440, 120, "ones");
	float **A = create_two_dim_float(220, 610, "ones");
	float **D = create_two_dim_float(120, 10, "ones");
	float *C = create_one_dim_float(770, "ones");

	for (int a = 5; a < 220; a++)
	{
	  
	    B[a][a]=B[a-3][a-5]-A[a][a];
	  
	    float var_a=A[a][a]-0.309;
	    float var_b=A[a-4][a-2]*0.991;
	}

    return 0;
}