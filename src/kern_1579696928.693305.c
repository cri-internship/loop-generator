#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(450, "ones");
	float *A = create_one_dim_float(40, "ones");
	float *B = create_one_dim_float(880, "ones");

	for (int b = 2; b < 37; b++)
	  for (int a = 2; a < 37; a++)
	  {
	    
	     C[a]=C[a+5]/0.642;
	    
	     A[a]=C[a]-B[a];
	     A[a-2]=C[a];
	    
	     float var_a=A[a]*0.073;
	     float var_b=A[a+3]+0.496;
	  }

    return 0;
}