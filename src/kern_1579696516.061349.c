#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(710, "random");

	for (int b = 5; b < 710; b++)
	  for (int a = 5; a < 710; a++)
	  {
	    
	     A[a]=A[a-5]/0.369;
	    
	     float var_a=A[a]/0.311;
	     float var_b=A[a-4]/0.606;
	  }

    return 0;
}