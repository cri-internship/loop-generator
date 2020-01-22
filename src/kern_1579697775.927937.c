#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(490, 580, "zeros");
	float *A = create_one_dim_float(440, "zeros");
	float *C = create_one_dim_float(470, "zeros");

	for (int b = 2; b < 436; b++)
	  for (int a = 2; a < 436; a++)
	  {
	    
	     A[a]=A[a+4]-C[a];
	    
	     C[a]=0.149;
	     C[a-1]=0.961;
	    
	     float var_a=C[a]*0.208;
	     float var_b=C[a-2]-0.63;
	  }

    return 0;
}