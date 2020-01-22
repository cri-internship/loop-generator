#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(530, "zeros");

	for (int c = 0; c < 527; c++)
	  for (int b = 0; b < 527; b++)
	    for (int a = 0; a < 527; a++)
	    {
	      
	      A[a]=0.691;
	      A[a+3]=0.383;
	      
	      A[a]=0.302;
	    }

    return 0;
}