#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(600, 800, "ones");
	double *B = create_one_dim_double(560, "ones");

	for (int a = 0; a < 560; a++)
	{
	  
	    A[a][a]=A[a+3][a+1]+B[a];
	  
	    A[a][a]=B[a]+A[a][a];
	}

    return 0;
}