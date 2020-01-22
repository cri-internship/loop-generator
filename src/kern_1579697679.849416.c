#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(30, "ones");
	float *A = create_one_dim_float(170, "ones");

	for (int d = 0; d < 28; d++)
	  for (int c = 0; c < 28; c++)
	    for (int b = 0; b < 28; b++)
	      for (int a = 0; a < 28; a++)
	      {
	        
	       B[a]=B[a+2]/A[a];
	        
	       A[a]=A[a]-0.883;
	       B[a]=A[a+1]-B[a];
	      }

    return 0;
}