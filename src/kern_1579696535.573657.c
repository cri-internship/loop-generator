#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(50, 580, "zeros");
	float *A = create_one_dim_float(900, "zeros");
	float *B = create_one_dim_float(900, "zeros");

	for (int b = 1; b < 900; b++)
	  for (int a = 1; a < 900; a++)
	  {
	    
	     float var_a=B[a]-0.694;
	     float var_b=B[a-1]+0.238;
	  }

    return 0;
}