#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(90, "ones");

	for (int d = 5; d < 90; d++)
	  for (int c = 5; c < 90; c++)
	    for (int b = 5; b < 90; b++)
	      for (int a = 5; a < 90; a++)
	      {
	        
	       A[a]=A[a-5]+0.599;
	        
	       A[a]=A[a-3]-0.009;
	        
	       float var_a=A[a]*0.761;
	      }

    return 0;
}