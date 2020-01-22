#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(920, "ones");
	float *A = create_one_dim_float(190, "ones");
	float ***B = create_three_dim_float(700, 840, 940, "ones");

	for (int a = 4; a < 190; a++)
	{
	  
	    A[a]=A[a-3]*0.773;
	  
	    A[a]=A[a-2]-C[a]/B[a][a][a];
	  
	    A[a]=A[a-4]-0.725;
	  
	    float var_a=B[a][a][a]-0.836;
	    float var_b=B[a+4][a+5][a+4]+0.312;
	}

    return 0;
}