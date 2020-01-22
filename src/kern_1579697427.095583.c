#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(140, "zeros");

	for (int d = 0; d < 135; d++)
	  for (int c = 0; c < 135; c++)
	    for (int b = 0; b < 135; b++)
	      for (int a = 0; a < 135; a++)
	      {
	        
	       A[a]=A[a+5]-0.771;
	      }

    return 0;
}