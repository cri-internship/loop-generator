#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(240, 560, "zeros");
	float **D = create_two_dim_float(970, 990, "zeros");
	float **C = create_two_dim_float(140, 160, "zeros");
	float **A = create_two_dim_float(770, 980, "zeros");

	for (int a = 3; a < 236; a++)
	{
	  
	    B[a][a]=A[a][a];
	    B[a-2][a-3]=D[a][a];
	  
	    A[a][a]=0.741;
	    A[a+1][a+4]=0.955;
	  
	    A[a][a]=0.969;
	  
	    B[a][a]=C[a][a]-A[a][a];
	}

    return 0;
}