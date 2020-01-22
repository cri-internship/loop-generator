#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(790, "zeros");

	for (int d = 0; d < 788; d++)
	  for (int c = 0; c < 788; c++)
	    for (int b = 0; b < 788; b++)
	      for (int a = 0; a < 788; a++)
	      {
	        
	       A[a]=A[a+2]-0.328;
	      }

    return 0;
}