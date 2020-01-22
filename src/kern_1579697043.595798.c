#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(1000, "random");
	float **A = create_two_dim_float(410, 170, "random");
	float ***C = create_three_dim_float(650, 880, 900, "random");

	for (int a = 0; a < 406; a++)
	{
	  
	    A[a][a]=A[a+3][a+1]+0.366;
	  
	    B[a]=B[a+4]-0.147;
	  
	    A[a][a]=0.327;
	  
	    float var_a=B[a]*0.119;
	    float var_b=B[a+3]*0.099;
	}

    return 0;
}