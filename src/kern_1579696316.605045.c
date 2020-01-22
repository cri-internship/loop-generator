#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(100, "ones");
	float *A = create_one_dim_float(470, "ones");

	for (int b = 1; b < 100; b++)
	  for (int a = 1; a < 100; a++)
	  {
	    
	     A[a]=B[a];
	     A[a]=B[a];
	    
	     float var_a=B[a]*0.341;
	     float var_b=B[a-1]/0.155;
	  }

    return 0;
}