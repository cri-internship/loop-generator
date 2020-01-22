#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(130, "random");
	float *B = create_one_dim_float(1000, "random");
	float *C = create_one_dim_float(280, "random");

	for (int d = 1; d < 1000; d++)
	  for (int c = 1; c < 1000; c++)
	    for (int b = 1; b < 1000; b++)
	      for (int a = 1; a < 1000; a++)
	      {
	        
	       B[a]=B[a-1]+0.761;
	        
	       B[a]=0.634;
	      }

    return 0;
}