#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(140, 860, 310, "ones");
	double *A = create_one_dim_double(110, "ones");
	double *C = create_one_dim_double(860, "ones");

	for (int d = 1; d < 110; d++)
	  for (int c = 1; c < 110; c++)
	    for (int b = 1; b < 110; b++)
	      for (int a = 1; a < 110; a++)
	      {
	        
	       A[a]=A[a-1]/0.72;
	      }

    return 0;
}