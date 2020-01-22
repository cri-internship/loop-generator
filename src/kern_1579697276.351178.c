#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(980, "ones");

	for (int c = 3; c < 980; c++)
	  for (int b = 3; b < 980; b++)
	    for (int a = 3; a < 980; a++)
	    {
	      
	      A[a]=A[a-3]+0.927;
	    }

    return 0;
}