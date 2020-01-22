#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(430, 900, "ones");
	float *A = create_one_dim_float(990, "ones");

	for (int d = 0; d < 900; d++)
	  for (int c = 4; c < 430; c++)
	    for (int b = 4; b < 430; b++)
	      for (int a = 4; a < 430; a++)
	      {
	        
	       A[a]=A[a-3]+0.706;
	        
	       A[a]=A[a-1]/0.823;
	        
	       float var_a=B[a][b]*0.885;
	       float var_b=B[a-4][b]*0.163;
	      }

    return 0;
}