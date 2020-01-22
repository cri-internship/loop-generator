#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(950, "ones");

	for (int c = 5; c < 950; c++)
	  for (int b = 5; b < 950; b++)
	    for (int a = 5; a < 950; a++)
	    {
	      
	      double var_a=A[a]+0.765;
	      double var_b=A[a-5]/0.827;
	    }

    return 0;
}