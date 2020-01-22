#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(50, "zeros");

	for (int c = 1; c < 50; c++)
	  for (int b = 1; b < 50; b++)
	    for (int a = 1; a < 50; a++)
	    {
	      
	      A[a]=A[a-1]*0.677;
	    }

    return 0;
}