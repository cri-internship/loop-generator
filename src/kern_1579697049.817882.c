#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(870, "ones");
	float *A = create_one_dim_float(350, "ones");

	for (int b = 0; b < 347; b++)
	  for (int a = 0; a < 347; a++)
	  {
	    
	     float var_a=A[a]/0.142;
	     float var_b=A[a+3]+0.606;
	  }

    return 0;
}