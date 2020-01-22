#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(550, "random");

	for (int c = 0; c < 547; c++)
	  for (int b = 0; b < 547; b++)
	    for (int a = 0; a < 547; a++)
	    {
	      
	      A[a]=A[a+3]*0.389;
	    }

    return 0;
}