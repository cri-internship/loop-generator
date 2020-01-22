#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(790, "random");
	float **B = create_two_dim_float(300, 550, "random");

	for (int a = 5; a < 298; a++)
	{
	  
	    float var_a=B[a][a]-0.069;
	    float var_b=B[a+1][a+2]-0.019;
	  
	    float var_c=B[a][a]+0.225;
	    float var_d=B[a-2][a-5]+0.08;
	}

    return 0;
}