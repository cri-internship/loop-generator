#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(240, "random");
	float **A = create_two_dim_float(490, 990, "random");

	for (int b = 4; b < 239; b++)
	  for (int a = 4; a < 239; a++)
	  {
	    
	     B[a]=B[a-4]+0.009;
	    
	     B[a]=B[a+1]/0.461;
	  }

    return 0;
}