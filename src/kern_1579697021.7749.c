#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(760, "zeros");
	float ***D = create_three_dim_float(40, 1000, 490, "zeros");
	float *C = create_one_dim_float(770, "zeros");
	float ***B = create_three_dim_float(380, 730, 380, "zeros");

	for (int a = 5; a < 40; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-3][a-1]+0.392;
	  
	    B[a][a][a]=B[a][a][a+4]-0.762;
	  
	    C[a]=B[a][a][a]*D[a][a][a]+A[a];
	    C[a]=0.792/A[a];
	  
	    D[a][a][a]=0.107;
	}

    return 0;
}