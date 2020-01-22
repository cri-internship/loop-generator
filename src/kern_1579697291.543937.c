#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(90, "ones");
	float *A = create_one_dim_float(520, "ones");

	for (int b = 1; b < 90; b++)
	  for (int a = 1; a < 90; a++)
	  {
	    
	     A[a]=A[a-1]*0.916;
	    
	     A[a]=0.004;
	    
	     B[a]=0.211;
	     B[a]=A[a];
	    
	     float var_a=A[a]/0.47;
	  }

    return 0;
}