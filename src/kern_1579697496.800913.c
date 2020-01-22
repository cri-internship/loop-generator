#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(160, 780, "ones");
	float *A = create_one_dim_float(540, "ones");
	float ***C = create_three_dim_float(840, 240, 160, "ones");

	for (int a = 0; a < 158; a++)
	{
	  
	    float var_a=B[a][a]*0.207;
	    float var_b=B[a+1][a+2]+0.689;
	}

    return 0;
}