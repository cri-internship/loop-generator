#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(250, "ones");
	double *B = create_one_dim_double(900, "ones");

	for (int c = 1; c < 250; c++)
	  for (int b = 1; b < 250; b++)
	    for (int a = 1; a < 250; a++)
	    {
	      
	      B[a]=A[a]-B[a];
	      A[a]=A[a-1]*0.146;
	    }

    return 0;
}