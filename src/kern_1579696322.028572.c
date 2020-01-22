#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(220, 810, "random");
	float *B = create_one_dim_float(140, "random");
	float **C = create_two_dim_float(80, 320, "random");

	for (int a = 0; a < 215; a++)
	{
	  
	    A[a][a]=B[a]/C[a][a];
	    A[a+4][a+5]=0.741/C[a][a];
	  
	    float var_a=A[a][a]/0.987;
	    float var_b=A[a+5][a+5]+0.466;
	}

    return 0;
}