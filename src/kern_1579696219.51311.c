#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(500, 410, 720, "ones");
	float **C = create_two_dim_float(920, 280, "ones");
	float *A = create_one_dim_float(170, "ones");

	for (int a = 4; a < 170; a++)
	{
	  
	    A[a]=A[a-1]+B[a][a][a]-C[a][a];
	  
	    B[a][a][a]=B[a+4][a+4][a+5]/0.988;
	  
	    float var_a=C[a][a]+0.854;
	    float var_b=C[a-4][a-2]*0.499;
	}

    return 0;
}