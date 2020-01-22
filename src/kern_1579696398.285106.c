#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(280, 240, "random");
	float *A = create_one_dim_float(70, "random");
	float *B = create_one_dim_float(540, "random");
	float *D = create_one_dim_float(170, "random");

	for (int a = 2; a < 65; a++)
	{
	  
	    D[a]=D[a-2]+0.346;
	  
	    A[a]=A[a+5]-0.688;
	  
	    B[a]=C[a][a]*A[a];
	    B[a+1]=D[a]+C[a][a];
	  
	    float var_a=C[a][a]/0.7;
	    float var_b=C[a+4][a+3]-0.815;
	}

    return 0;
}