#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(20, 190, "random");
	double *B = create_one_dim_double(610, "random");
	double *C = create_one_dim_double(170, "random");

	for (int a = 4; a < 15; a++)
	{
	  
	    A[a][a]=A[a-4][a-3]+C[a];
	  
	    A[a][a]=A[a-2][a]+B[a]/C[a];
	}

    return 0;
}