#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(890, 850, 930, "ones");
	float *A = create_one_dim_float(810, "ones");

	for (int a = 4; a < 807; a++)
	{
	  
	    A[a]=A[a-4]+B[a][a][a];
	  
	    float var_a=A[a]-0.182;
	    float var_b=A[a+3]-0.33;
	}

    return 0;
}