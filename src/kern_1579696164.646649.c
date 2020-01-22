#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(370, 920, 130, "ones");
	float *A = create_one_dim_float(240, "ones");
	float *B = create_one_dim_float(920, "ones");

	for (int a = 1; a < 240; a++)
	{
	  
	    B[a]=B[a-1]+C[a][a][a]*A[a];
	  
	    B[a]=A[a]-B[a]+0.065;
	    A[a]=A[a-1]+0.03/C[a][a][a];
	}

    return 0;
}