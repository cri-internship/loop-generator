#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(330, 600, "ones");

	for (int d = 0; d < 596; d++)
	  for (int c = 0; c < 325; c++)
	    for (int b = 0; b < 325; b++)
	      for (int a = 0; a < 325; a++)
	      {
	        
	       A[a][b]=A[a+5][b+4]-0.26;
	      }

    return 0;
}