#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(480, "random");
	float *B = create_one_dim_float(230, "random");
	float *A = create_one_dim_float(790, "random");

	for (int a = 5; a < 230; a++)
	{
	  
	    B[a]=B[a-1]-C[a]+A[a];
	  
	    A[a]=B[a];
	    C[a]=A[a]*B[a]-C[a];
	  
	    float var_a=A[a]-0.554;
	    float var_b=A[a-4]-0.52;
	  
	    B[a]=A[a]-0.312;
	    A[a]=A[a-5]/0.22*B[a];
	}

    return 0;
}