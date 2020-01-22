#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(170, 940, "random");
	float *A = create_one_dim_float(840, "random");
	float ***D = create_three_dim_float(730, 650, 900, "random");
	float *B = create_one_dim_float(810, "random");

	for (int a = 1; a < 168; a++)
	{
	  
	    B[a]=B[a+3]-0.323;
	  
	    B[a]=B[a+5]*A[a]+0.841;
	  
	    C[a][a]=0.073;
	    C[a][a+2]=0.008;
	}

    return 0;
}