#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(400, "ones");
	float *B = create_one_dim_float(670, "ones");
	float *A = create_one_dim_float(70, "ones");

	for (int b = 2; b < 667; b++)
	  for (int a = 2; a < 667; a++)
	  {
	    
	     B[a]=0.012;
	     B[a+3]=0.334;
	    
	     float var_a=B[a]-0.901;
	     float var_b=B[a-2]*0.007;
	  }

    return 0;
}