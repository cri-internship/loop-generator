#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(70, "ones");
	float **B = create_two_dim_float(790, 420, "ones");

	for (int a = 2; a < 790; a++)
	{
	  
	    float var_a=B[a][a]-0.645;
	    float var_b=B[a-2][a]+0.095;
	}

    return 0;
}