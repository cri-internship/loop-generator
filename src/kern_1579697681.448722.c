#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(360, "ones");
	double *B = create_one_dim_double(490, "ones");

	for (int b = 1; b < 487; b++)
	  for (int a = 1; a < 487; a++)
	  {
	    
	     B[a]=B[a+3]+0.47;
	    
	     B[a]=A[a];
	  }

    return 0;
}