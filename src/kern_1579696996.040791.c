#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(260, "ones");

	for (int b = 1; b < 257; b++)
	  for (int a = 1; a < 257; a++)
	  {
	    
	     A[a]=A[a-1]+0.136;
	    
	     A[a]=0.963;
	    
	     float var_b=A[a]*0.057;
	     float var_c=A[a+3]+0.623;
	  }

    return 0;
}