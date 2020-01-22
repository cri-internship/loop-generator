#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(790, "zeros");
	float *C = create_one_dim_float(320, "zeros");
	float *B = create_one_dim_float(310, "zeros");
	float *D = create_one_dim_float(750, "zeros");

	for (int b = 3; b < 310; b++)
	  for (int a = 3; a < 310; a++)
	  {
	    
	     B[a]=0.176;
	     B[a-3]=0.975;
	  }

    return 0;
}