#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(570, 950, "ones");
	float *A = create_one_dim_float(770, "ones");

	for (int b = 0; b < 768; b++)
	  for (int a = 0; a < 768; a++)
	  {
	    
	     A[a]=A[a+2]*0.304;
	  }

    return 0;
}