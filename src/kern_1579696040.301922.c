#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(200, "ones");
	float *A = create_one_dim_float(590, "ones");

	for (int c = 5; c < 200; c++)
	  for (int b = 5; b < 200; b++)
	    for (int a = 5; a < 200; a++)
	    {
	      
	      B[a]=B[a-4]-A[a];
	      
	      float var_a=A[a]-0.731;
	      float var_b=A[a-5]+0.536;
	      
	      A[a]=B[a]-A[a];
	      B[a]=B[a-3]+0.824;
	    }

    return 0;
}