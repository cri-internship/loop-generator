#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(740, "random");
	float *B = create_one_dim_float(710, "random");

	for (int d = 5; d < 710; d++)
	  for (int c = 5; c < 710; c++)
	    for (int b = 5; b < 710; b++)
	      for (int a = 5; a < 710; a++)
	      {
	        
	       A[a]=A[a-3]/B[a];
	        
	       A[a]=0.548;
	        
	       B[a]=A[a];
	       B[a-3]=A[a];
	        
	       float var_a=A[a]-0.925;
	       float var_b=A[a+2]+0.555;
	      }

    return 0;
}