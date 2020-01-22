#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(420, 1000, 30, "random");
	float *A = create_one_dim_float(870, "random");
	float *D = create_one_dim_float(340, "random");
	float **B = create_two_dim_float(950, 700, "random");

	for (int a = 2; a < 336; a++)
	{
	  
	    D[a]=D[a-2]-C[a][a][a]+B[a][a];
	  
	    float var_a=D[a]+0.061;
	    float var_b=D[a+4]+0.982;
	}

    return 0;
}