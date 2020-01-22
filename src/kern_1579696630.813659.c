#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(920, "zeros");
	float *A = create_one_dim_float(410, "zeros");

	for (int c = 2; c < 407; c++)
	  for (int b = 2; b < 407; b++)
	    for (int a = 2; a < 407; a++)
	    {
	      
	      B[a]=B[a-2]/0.357;
	      
	      A[a]=B[a];
	      A[a+3]=0.782;
	    }

    return 0;
}