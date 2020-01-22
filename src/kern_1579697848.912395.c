#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(820, "random");
	float *A = create_one_dim_float(430, "random");

	for (int d = 0; d < 425; d++)
	  for (int c = 0; c < 425; c++)
	    for (int b = 0; b < 425; b++)
	      for (int a = 0; a < 425; a++)
	      {
	        
	       A[a]=A[a+1]*0.804;
	        
	       A[a]=A[a+5]-B[a];
	      }

    return 0;
}