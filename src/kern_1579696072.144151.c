#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(430, 110, "random");
	float *A = create_one_dim_float(450, "random");

	for (int d = 0; d < 445; d++)
	  for (int c = 0; c < 445; c++)
	    for (int b = 0; b < 445; b++)
	      for (int a = 0; a < 445; a++)
	      {
	        
	       float var_a=A[a]/0.723;
	       float var_b=A[a+5]/0.527;
	      }

    return 0;
}