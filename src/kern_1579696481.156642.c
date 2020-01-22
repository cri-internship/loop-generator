#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(510, 340, "ones");
	float **A = create_two_dim_float(210, 810, "ones");
	float ***B = create_three_dim_float(480, 660, 480, "ones");
	float *D = create_one_dim_float(40, "ones");

	for (int a = 2; a < 37; a++)
	{
	  
	    A[a][a]=A[a+1][a+2]-D[a]/B[a][a][a];
	  
	    D[a]=A[a][a];
	    D[a-2]=C[a][a]-A[a][a]/B[a][a][a];
	  
	    D[a]=B[a][a][a]-C[a][a];
	  
	    float var_a=D[a]-0.478;
	    float var_b=D[a+3]/0.209;
	}

    return 0;
}