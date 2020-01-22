#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(750, 600, "zeros");

	for (int d = 4; d < 596; d++)
	  for (int c = 3; c < 749; c++)
	    for (int b = 3; b < 749; b++)
	      for (int a = 3; a < 749; a++)
	      {
	        
	       A[a][b]=A[a-3][b-4]-0.874;
	        
	       A[a][b]=A[a+1][b+4]/0.273;
	      }

    return 0;
}