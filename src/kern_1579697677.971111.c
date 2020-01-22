#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(210, "zeros");
	float **C = create_two_dim_float(990, 30, "zeros");
	float *A = create_one_dim_float(290, "zeros");

	for (int a = 4; a < 205; a++)
	{
	  
	    C[a][a]=C[a-2][a-4]+0.419;
	  
	    B[a]=B[a+5]-A[a]+C[a][a];
	  
	    A[a]=0.466;
	    A[a]=B[a];
	  
	    B[a]=B[a]+A[a]/C[a][a];
	}

    return 0;
}