#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(950, "zeros");
	float *C = create_one_dim_float(800, "zeros");
	float ***D = create_three_dim_float(630, 120, 140, "zeros");
	float **A = create_two_dim_float(370, 370, "zeros");

	for (int a = 0; a < 369; a++)
	{
	  
	    A[a][a]=A[a][a+1]*0.661;
	  
	    D[a][a][a]=C[a]/A[a][a]*B[a];
	    D[a][a+4][a+3]=B[a]+C[a]/A[a][a];
	}

    return 0;
}