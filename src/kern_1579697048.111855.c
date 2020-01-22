#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(490, 930, "zeros");
	double *C = create_one_dim_double(450, "zeros");
	double *A = create_one_dim_double(880, "zeros");

	for (int a = 1; a < 490; a++)
	{
	  
	    B[a][a]=B[a-1][a-1]-A[a];
	  
	    A[a]=A[a]-B[a][a]*C[a];
	    C[a]=A[a-1]-B[a][a];
	}

    return 0;
}