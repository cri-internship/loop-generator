#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(340, "ones");
	float *B = create_one_dim_float(160, "ones");
	float *C = create_one_dim_float(730, "ones");
	float *D = create_one_dim_float(910, "ones");

	for (int c = 0; c < 730; c++)
	  for (int b = 0; b < 730; b++)
	    for (int a = 0; a < 730; a++)
	    {
	      
	      D[a]=C[a];
	      D[a+3]=0.341/B[a];
	      
	      float var_a=C[a]/0.232;
	      
	      B[a]=D[a]/C[a]-B[a];
	      C[a]=D[a+3]+C[a]/A[a]-0.028;
	    }

    return 0;
}