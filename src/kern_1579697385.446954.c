#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(540, "random");
	float *C = create_one_dim_float(400, "random");
	float *B = create_one_dim_float(440, "random");

	for (int d = 3; d < 400; d++)
	  for (int c = 3; c < 400; c++)
	    for (int b = 3; b < 400; b++)
	      for (int a = 3; a < 400; a++)
	      {
	        
	       A[a]=A[a-1]/0.806;
	        
	       A[a]=A[a+4]/C[a];
	        
	       float var_a=C[a]-0.155;
	       float var_b=C[a-3]+0.641;
	      }

    return 0;
}