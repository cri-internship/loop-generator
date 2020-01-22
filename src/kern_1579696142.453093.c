#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(670, 10, "ones");
	float *B = create_one_dim_float(180, "ones");
	float **C = create_two_dim_float(580, 220, "ones");

	for (int a = 0; a < 177; a++)
	{
	  
	    A[a][a]=0.935;
	    A[a+4][a]=0.342;
	  
	    float var_a=B[a]+0.25;
	    float var_b=B[a]+0.567;
	  
	    C[a][a]=B[a]*C[a][a];
	    B[a]=B[a+3]-A[a][a];
	}

    return 0;
}