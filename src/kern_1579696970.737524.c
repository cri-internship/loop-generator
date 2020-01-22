#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(160, "ones");
	float *B = create_one_dim_float(160, "ones");

	for (int d = 5; d < 158; d++)
	  for (int c = 5; c < 158; c++)
	    for (int b = 5; b < 158; b++)
	      for (int a = 5; a < 158; a++)
	      {
	        
	       B[a]=B[a-5]*A[a];
	        
	       B[a]=B[a-4]-0.691;
	        
	       A[a]=A[a+2]-0.564;
	        
	       float var_a=B[a]-0.742;
	       float var_b=B[a-1]/0.191;
	      }

    return 0;
}