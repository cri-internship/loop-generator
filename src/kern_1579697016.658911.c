#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(940, "ones");
	float **C = create_two_dim_float(300, 660, "ones");
	float **E = create_two_dim_float(280, 730, "ones");
	float **D = create_two_dim_float(240, 400, "ones");
	float *A = create_one_dim_float(510, "ones");

	for (int a = 4; a < 240; a++)
	{
	  
	    A[a]=A[a-1]-0.356;
	  
	    D[a][a]=D[a-4][a]+A[a]*E[a][a]-B[a]/C[a][a];
	  
	    A[a]=A[a+2]-D[a][a];
	}

    return 0;
}