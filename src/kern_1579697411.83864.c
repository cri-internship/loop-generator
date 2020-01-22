#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(880, 320, 670, "zeros");
	float ***D = create_three_dim_float(180, 810, 830, "zeros");
	float **C = create_two_dim_float(770, 880, "zeros");
	float *A = create_one_dim_float(730, "zeros");
	float **E = create_two_dim_float(690, 160, "zeros");

	for (int a = 0; a < 875; a++)
	{
	  
	    B[a][a][a]=B[a+4][a+1][a+5]/0.486;
	}

    return 0;
}