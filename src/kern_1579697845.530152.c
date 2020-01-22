#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(190, "ones");
	float *B = create_one_dim_float(470, "ones");

	for (int b = 4; b < 188; b++)
	  for (int a = 4; a < 188; a++)
	  {
	    
	     A[a]=0.614;
	     float  var_a=A[a]-0.929;
	    
	     A[a]=A[a-4]+0.44;
	    
	     A[a]=A[a+1]*0.308;
	    
	     B[a]=0.378;
	     B[a-3]=0.249;
	  }

    return 0;
}