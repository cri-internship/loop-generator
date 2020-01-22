#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(60, 870, 30, "ones");
	float *A = create_one_dim_float(60, "ones");

	for (int a = 4; a < 56; a++)
	{
	  
	    B[a][a][a]=B[a+4][a+4][a+3]*0.957;
	  
	    A[a]=0.04;
	    A[a-2]=B[a][a][a];
	  
	    A[a]=A[a]*B[a][a][a];
	    B[a][a][a]=A[a-4]-B[a][a][a];
	}

    return 0;
}