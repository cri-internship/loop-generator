#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(160, "random");
	double **B = create_two_dim_double(830, 980, "random");

	for (int c = 2; c < 160; c++)
	  for (int b = 2; b < 160; b++)
	    for (int a = 2; a < 160; a++)
	    {
	      
	      A[a]=A[a-2]-0.274;
	    }

    return 0;
}