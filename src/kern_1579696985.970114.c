#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(90, 310, "ones");
	float ***D = create_three_dim_float(50, 70, 620, "ones");
	float *C = create_one_dim_float(530, "ones");
	float ***B = create_three_dim_float(770, 790, 180, "ones");

	for (int a = 4; a < 50; a++)
	{
	  
	    A[a][a]=A[a-1][a-4]+0.613;
	  
	    A[a][a]=A[a+2][a+1]-B[a][a][a]/D[a][a][a]+C[a];
	  
	    D[a][a][a]=A[a][a];
	    D[a-2][a-2][a-2]=0.111;
	  
	    B[a][a][a]=0.689;
	    B[a-1][a-3][a-3]=0.337;
	  
	    D[a][a][a]=C[a]/D[a][a][a]-0.497;
	    A[a][a]=C[a+4]+A[a][a]-D[a][a][a];
	}

    return 0;
}