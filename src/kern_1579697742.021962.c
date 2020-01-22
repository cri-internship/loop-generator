#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(510, "random");
	float **A = create_two_dim_float(210, 160, "random");

	for (int d = 0; d < 158; d++)
	  for (int c = 0; c < 205; c++)
	    for (int b = 0; b < 205; b++)
	      for (int a = 0; a < 205; a++)
	      {
	        
	       A[a][b]=A[a+5][b+2]/0.796;
	      }

    return 0;
}