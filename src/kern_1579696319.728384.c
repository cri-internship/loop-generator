#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(770, "zeros");
	float **B = create_two_dim_float(490, 400, "zeros");

	for (int a = 3; a < 488; a++)
	{
	  
	    A[a]=A[a-1]*B[a][a];
	  
	    A[a]=A[a+3]-B[a][a];
	  
	    B[a][a]=B[a+2][a+1]*0.821;
	  
	    B[a][a]=0.887;
	}

    return 0;
}