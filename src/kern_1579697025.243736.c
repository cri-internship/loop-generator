#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(910, "ones");
	float *A = create_one_dim_float(420, "ones");

	for (int d = 2; d < 420; d++)
	  for (int c = 2; c < 420; c++)
	    for (int b = 2; b < 420; b++)
	      for (int a = 2; a < 420; a++)
	      {
	        
	       A[a]=A[a-2]/0.081;
	      }

    return 0;
}