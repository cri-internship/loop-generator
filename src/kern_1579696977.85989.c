#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(630, "ones");

	for (int d = 5; d < 630; d++)
	  for (int c = 5; c < 630; c++)
	    for (int b = 5; b < 630; b++)
	      for (int a = 5; a < 630; a++)
	      {
	        
	       float var_a=A[a]/0.446;
	       float var_b=A[a-5]/0.477;
	        
	       float var_c=A[a]+0.393;
	      }

    return 0;
}