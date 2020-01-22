#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(940, 1000, 180, "ones");
	float ***D = create_three_dim_float(1000, 10, 100, "ones");
	float *A = create_one_dim_float(80, "ones");
	float **B = create_two_dim_float(530, 190, "ones");

	for (int a = 4; a < 526; a++)
	{
	  
	    B[a][a]=C[a][a][a]-D[a][a][a];
	    B[a][a+4]=A[a];
	  
	    C[a][a][a]=C[a][a][a]/B[a][a]+0.718;
	    D[a][a][a]=C[a-2][a-4][a-4]-B[a][a]*D[a][a][a]/A[a];
	  
	    B[a][a]=B[a][a]-D[a][a][a]/C[a][a][a];
	    A[a]=B[a-1][a]/C[a][a][a]-A[a]*0.072;
	}

    return 0;
}