#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(380, 1000, "zeros");

	for (int c = 3; c < 1000; c++)
	  for (int b = 0; b < 380; b++)
	    for (int a = 0; a < 380; a++)
	    {
	      
	      A[a][b]=A[a][b-3]/0.623;
	    }

    return 0;
}