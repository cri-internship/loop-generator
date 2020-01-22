#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(600, "zeros");
	double *A = create_one_dim_double(60, "zeros");
	double *B = create_one_dim_double(410, "zeros");

	for (int c = 0; c < 409; c++)
	  for (int b = 0; b < 409; b++)
	    for (int a = 0; a < 409; a++)
	    {
	      
	      B[a]=B[a]+A[a];
	      C[a]=B[a+1]*C[a]-A[a];
	    }

    return 0;
}