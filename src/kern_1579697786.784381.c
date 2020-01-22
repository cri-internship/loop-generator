#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(580, 700, "zeros");
	float **C = create_two_dim_float(490, 660, "zeros");
	float *A = create_one_dim_float(60, "zeros");
	float **D = create_two_dim_float(530, 340, "zeros");
	float **E = create_two_dim_float(810, 840, "zeros");

	for (int a = 0; a < 58; a++)
	{
	  
	    float var_a=A[a]*0.679;
	    float var_b=A[a+2]-0.891;
	}

    return 0;
}