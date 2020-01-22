#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(340, "zeros");
	float *A = create_one_dim_float(200, "zeros");
	float **B = create_two_dim_float(170, 790, "zeros");

	for (int b = 3; b < 198; b++)
	  for (int a = 3; a < 198; a++)
	  {
	    
	     A[a]=A[a-3]+0.143;
	    
	     C[a]=C[a+5]*A[a];
	    
	     C[a]=C[a+3]*B[a][b]+A[a];
	    
	     A[a]=A[a+2]/0.414;
	    
	     float var_a=C[a]-0.515;
	     float var_b=C[a-2]*0.694;
	  }

    return 0;
}