#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(570, 140, 500, "zeros");
	float *B = create_one_dim_float(710, "zeros");

	for (int a = 5; a < 570; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-2][a-5]+B[a];
	  
	    A[a][a][a]=A[a-2][a-1][a]+B[a];
	  
	    A[a][a][a]=A[a-4][a-1][a-5]/0.02;
	  
	    B[a]=B[a+1]/A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]-B[a];
	}

    return 0;
}