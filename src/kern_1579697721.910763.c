#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(920, 880, "random");
	double *A = create_one_dim_double(930, "random");

	for (int a = 3; a < 928; a++)
	{
	  
	    A[a]=A[a-3]+B[a][a];
	  
	    A[a]=A[a+2]+0.475;
	  
	    A[a]=0.081;
	}

    return 0;
}