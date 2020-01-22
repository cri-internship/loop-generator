#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(710, "random");
	float *A = create_one_dim_float(840, "random");

	for (int b = 4; b < 710; b++)
	  for (int a = 4; a < 710; a++)
	  {
	    
	     B[a]=0.123;
	     B[a-4]=0.387;
	  }

    return 0;
}