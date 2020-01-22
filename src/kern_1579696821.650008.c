#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(570, "ones");
	float *B = create_one_dim_float(320, "ones");

	for (int b = 5; b < 318; b++)
	  for (int a = 5; a < 318; a++)
	  {
	    
	     A[a]=A[a-3]-0.567;
	    
	     B[a]=B[a-3]+A[a];
	    
	     float  var_a=B[a]-0.536;
	    
	     B[a]=B[a+2]*0.606;
	    
	     A[a]=0.42;
	  }

    return 0;
}