#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(900, 140, "zeros");
	float **B = create_two_dim_float(320, 790, "zeros");
	float **A = create_two_dim_float(140, 370, "zeros");

	for (int a = 3; a < 140; a++)
	{
	  
	    C[a][a]=B[a][a];
	    C[a-3][a-3]=0.03/A[a][a];
	  
	    B[a][a]=C[a][a]/A[a][a];
	    A[a][a]=C[a-3][a-3]*0.251;
	  
	    C[a][a]=A[a][a]+C[a][a]-C[a][a];
	    A[a][a]=A[a][a-2]*B[a][a];
	}

    return 0;
}