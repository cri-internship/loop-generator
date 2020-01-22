#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(400, "ones");

	for (int c = 0; c < 397; c++)
	  for (int b = 0; b < 397; b++)
	    for (int a = 0; a < 397; a++)
	    {
	      
	      A[a]=A[a+3]+0.158;
	    }

    return 0;
}