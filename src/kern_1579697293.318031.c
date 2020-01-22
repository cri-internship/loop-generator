#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(680, "zeros");
	float *A = create_one_dim_float(780, "zeros");

	for (int b = 5; b < 677; b++)
	  for (int a = 5; a < 677; a++)
	  {
	    
	     B[a]=B[a-4]*A[a];
	    
	     B[a]=B[a-5]/0.214;
	    
	     B[a]=B[a+3]-0.911;
	    
	     A[a]=0.234;
	     A[a+4]=0.619;
	    
	     float var_a=B[a]/0.054;
	     float var_b=B[a-3]*0.506;
	  }

    return 0;
}