#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(290, "ones");
	float *B = create_one_dim_float(800, "ones");

	for (int d = 0; d < 287; d++)
	  for (int c = 0; c < 287; c++)
	    for (int b = 0; b < 287; b++)
	      for (int a = 0; a < 287; a++)
	      {
	        
	       A[a]=A[a+3]/0.961;
	      }

    return 0;
}