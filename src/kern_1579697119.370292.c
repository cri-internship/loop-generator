#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(980, 80, 940, "random");
	float *A = create_one_dim_float(490, "random");
	float **C = create_two_dim_float(660, 790, "random");
	float *D = create_one_dim_float(360, "random");
	float *E = create_one_dim_float(460, "random");

	for (int a = 0; a < 456; a++)
	{
	  
	    B[a][a][a]=C[a][a];
	    B[a][a+2][a+3]=A[a];
	  
	    float var_a=E[a]/0.545;
	    float var_b=E[a+4]-0.853;
	}

    return 0;
}