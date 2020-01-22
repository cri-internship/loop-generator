#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(290, "ones");
	float **B = create_two_dim_float(630, 720, "ones");
	float ***A = create_three_dim_float(90, 570, 470, "ones");

	for (int b = 0; b < 286; b++)
	  for (int a = 0; a < 286; a++)
	  {
	    
	     float var_a=C[a]+0.268;
	     float var_b=C[a+4]+0.059;
	  }

    return 0;
}