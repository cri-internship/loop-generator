#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(410, 750, 220, "ones");
	float **B = create_two_dim_float(950, 160, "ones");
	float ***C = create_three_dim_float(290, 270, 850, "ones");

	for (int a = 4; a < 290; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-1][a-3]+0.35;
	  
	    B[a][a]=B[a-2][a-4]*0.292;
	  
	    A[a][a][a]=A[a-4][a-4][a-2]+B[a][a];
	  
	    A[a][a][a]=A[a+1][a+3][a+3]-0.07;
	  
	    A[a][a][a]=A[a+4][a+3][a+2]+0.328;
	  
	    A[a][a][a]=C[a][a][a]/A[a][a][a];
	    B[a][a]=C[a-1][a-1][a-4]/0.027*A[a][a][a];
	}

    return 0;
}