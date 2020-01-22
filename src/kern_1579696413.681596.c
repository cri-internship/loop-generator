#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(850, "zeros");

	for (int c = 4; c < 850; c++)
	  for (int b = 4; b < 850; b++)
	    for (int a = 4; a < 850; a++)
	    {
	      
	      A[a]=A[a-4]/0.256;
	    }

    return 0;
}