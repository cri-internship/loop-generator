#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(450, "zeros");
	float *B = create_one_dim_float(950, "zeros");

	for (int b = 3; b < 950; b++)
	  for (int a = 3; a < 950; a++)
	  {
	    
	     B[a]=B[a-1]/A[a];
	    
	     B[a]=0.199;
	  }

    return 0;
}