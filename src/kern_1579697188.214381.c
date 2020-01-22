#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(970, "ones");
	float *D = create_one_dim_float(950, "ones");
	float *C = create_one_dim_float(400, "ones");
	float **B = create_two_dim_float(100, 990, "ones");

	for (int a = 2; a < 395; a++)
	{
	  
	    D[a]=A[a]/C[a];
	    D[a-2]=B[a][a];
	  
	    D[a]=C[a]*B[a][a];
	  
	    C[a]=0.026-B[a][a];
	    C[a+5]=A[a]-B[a][a]+D[a];
	  
	    A[a]=D[a];
	    A[a+3]=D[a]-0.46;
	  
	    D[a]=D[a]-0.018;
	    C[a]=D[a+3]*B[a][a]+A[a]/C[a];
	  
	    A[a]=C[a]*A[a]/D[a];
	    B[a][a]=C[a+2]/B[a][a];
	}

    return 0;
}