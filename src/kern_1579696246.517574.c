#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(250, "ones");
	double *A = create_one_dim_double(60, "ones");

	for (int c = 4; c < 56; c++)
	  for (int b = 4; b < 56; b++)
	    for (int a = 4; a < 56; a++)
	    {
	      
	      A[a]=A[a-3]+B[a];
	      
	      A[a]=A[a+4]/B[a];
	      
	      B[a]=A[a];
	      B[a-3]=A[a];
	      
	      B[a]=0.762;
	      
	      double var_a=B[a]-0.556;
	      double var_b=B[a-4]/0.526;
	    }

    return 0;
}