#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(10, "ones");
	float ***B = create_three_dim_float(180, 440, 100, "ones");

	for (int b = 5; b < 10; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     A[a]=A[a-5]-0.495;
	    
	     float var_a=A[a]/0.274;
	     float var_b=A[a]/0.432;
	  }

    return 0;
}