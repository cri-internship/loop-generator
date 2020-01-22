#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(320, "ones");

	for (int c = 5; c < 319; c++)
	  for (int b = 5; b < 319; b++)
	    for (int a = 5; a < 319; a++)
	    {
	      
	      A[a]=A[a-4]-0.311;
	      
	      A[a]=A[a-5]*0.071;
	      
	      A[a]=A[a+1]/0.713;
	    }

    return 0;
}