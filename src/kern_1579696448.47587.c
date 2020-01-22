#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "zeros");
	float *A = create_one_dim_float(360, "zeros");

	for (int d = 1; d < 358; d++)
	  for (int c = 1; c < 358; c++)
	    for (int b = 1; b < 358; b++)
	      for (int a = 1; a < 358; a++)
	      {
	        
	       B[a]=B[a-1]/0.32;
	        
	       A[a]=B[a];
	       A[a+2]=B[a];
	      }

    return 0;
}