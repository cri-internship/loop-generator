#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(890, "ones");
	double *A = create_one_dim_double(590, "ones");

	for (int c = 5; c < 590; c++)
	  for (int b = 5; b < 590; b++)
	    for (int a = 5; a < 590; a++)
	    {
	      
	      B[a]=B[a-3]+0.872;
	      
	      A[a]=A[a-2]*0.545;
	      
	      B[a]=0.544;
	    }

    return 0;
}