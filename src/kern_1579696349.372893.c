#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(90, 970, 490, "random");
	float *B = create_one_dim_float(620, "random");
	float *A = create_one_dim_float(720, "random");
	float *D = create_one_dim_float(700, "random");

	for (int a = 0; a < 718; a++)
	{
	  
	    A[a]=A[a+2]/0.963;
	  
	    float var_a=A[a]/0.075;
	    float var_b=A[a]-0.825;
	}

    return 0;
}