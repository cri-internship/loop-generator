#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(310, "zeros");
	float **C = create_two_dim_float(830, 620, "zeros");
	float ***B = create_three_dim_float(990, 70, 40, "zeros");

	for (int d = 1; d < 310; d++)
	  for (int c = 1; c < 310; c++)
	    for (int b = 1; b < 310; b++)
	      for (int a = 1; a < 310; a++)
	      {
	        
	       A[a]=A[a-1]-0.526;
	      }

    return 0;
}