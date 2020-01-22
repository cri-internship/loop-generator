#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(890, "ones");

	for (int c = 3; c < 890; c++)
	  for (int b = 3; b < 890; b++)
	    for (int a = 3; a < 890; a++)
	    {
	      
	      A[a]=A[a-3]/0.219;
	    }

    return 0;
}