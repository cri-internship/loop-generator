#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(920, "random");
	double **A = create_two_dim_double(60, 120, "random");
	double **B = create_two_dim_double(380, 990, "random");

	for (int a = 5; a < 60; a++)
	{
	  
	    A[a][a]=A[a-2][a-4]-B[a][a]/C[a];
	  
	    A[a][a]=0.551;
	}

    return 0;
}