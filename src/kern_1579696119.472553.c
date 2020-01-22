#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "ones");
	float *B = create_one_dim_float(480, "ones");

	for (int b = 2; b < 480; b++)
	  for (int a = 2; a < 480; a++)
	  {
	    
	     A[a]=A[a-2]/0.477;
	    
	     float  var_a=A[a]*0.364;
	    
	     B[a]=B[a-1]+0.616;
	    
	     float var_b=A[a]+0.97;
	     A[a]=0.745;
	  }

    return 0;
}