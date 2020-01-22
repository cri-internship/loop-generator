#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(180, "ones");
	double *B = create_one_dim_double(480, "ones");

	for (int c = 5; c < 176; c++)
	  for (int b = 5; b < 176; b++)
	    for (int a = 5; a < 176; a++)
	    {
	      
	      B[a]=B[a-2]*0.77;
	      
	      B[a]=B[a-3]*0.496;
	      
	      A[a]=A[a+2]-0.554;
	      
	      A[a]=A[a+4]/0.771;
	    }

    return 0;
}