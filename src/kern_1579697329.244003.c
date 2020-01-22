#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(330, 580, "zeros");
	float **A = create_two_dim_float(930, 900, "zeros");

	for (int a = 3; a < 330; a++)
	{
	  
	    B[a][a]=A[a][a];
	    B[a][a]=B[a][a]+A[a][a];
	  
	    A[a][a]=A[a-3][a-3]+B[a][a];
	  
	    A[a][a]=A[a][a]+0.378;
	    A[a][a]=A[a-3][a-2]/0.2;
	  
	    float var_a=A[a][a]-0.809;
	    float var_b=A[a][a+4]/0.378;
	}

    return 0;
}