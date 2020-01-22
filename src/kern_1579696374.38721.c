#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(90, "random");

	for (int d = 1; d < 90; d++)
	  for (int c = 1; c < 90; c++)
	    for (int b = 1; b < 90; b++)
	      for (int a = 1; a < 90; a++)
	      {
	        
	       A[a]=A[a-1]+0.553;
	      }

    return 0;
}