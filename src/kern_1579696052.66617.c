#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(460, "ones");

	for (int c = 0; c < 456; c++)
	  for (int b = 0; b < 456; b++)
	    for (int a = 0; a < 456; a++)
	    {
	      
	      A[a]=A[a+4]+0.607;
	    }

    return 0;
}