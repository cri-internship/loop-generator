#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "zeros");

	for (int c = 4; c < 580; c++)
	  for (int b = 4; b < 580; b++)
	    for (int a = 4; a < 580; a++)
	    {
	      
	      A[a]=A[a-4]+0.402;
	      
	      A[a]=A[a-3]+0.038;
	    }

    return 0;
}