#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(550, 430, 800, "zeros");
	float *A = create_one_dim_float(180, "zeros");
	float ***C = create_three_dim_float(790, 110, 210, "zeros");

	for (int a = 5; a < 178; a++)
	{
	  
	    C[a][a][a]=C[a-2][a-1][a-5]+0.825;
	  
	    C[a][a][a]=C[a][a][a]-A[a]*B[a][a][a];
	    A[a]=C[a+5][a+2][a]+0.755/B[a][a][a];
	  
	    B[a][a][a]=A[a]-C[a][a][a]+B[a][a][a];
	    A[a]=A[a+2]-B[a][a][a]/C[a][a][a];
	}

    return 0;
}