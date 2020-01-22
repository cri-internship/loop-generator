#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(810, 820, 870, "ones");
	float ***C = create_three_dim_float(660, 300, 240, "ones");
	float *B = create_one_dim_float(900, "ones");

	for (int a = 4; a < 660; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-3][a-4]/A[a][a][a]+B[a];
	  
	    B[a]=B[a-3]/0.751;
	  
	    A[a][a][a]=A[a-3][a-2][a-3]-C[a][a][a];
	  
	    C[a][a][a]=C[a-1][a-4][a]*0.008;
	  
	    B[a]=0.105;
	}

    return 0;
}