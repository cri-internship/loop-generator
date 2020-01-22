#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(770, "random");
	float ***C = create_three_dim_float(650, 750, 90, "random");
	float *B = create_one_dim_float(650, "random");
	float *A = create_one_dim_float(30, "random");

	for (int a = 0; a < 645; a++)
	{
	  
	    B[a]=B[a+1]/A[a]*D[a]-C[a][a][a];
	  
	    float var_a=B[a]-0.552;
	    float var_b=B[a+5]/0.779;
	  
	    A[a]=C[a][a][a]-B[a]/B[a]*A[a];
	    B[a]=C[a+1][a+1][a+1]+A[a]*D[a]-B[a];
	}

    return 0;
}