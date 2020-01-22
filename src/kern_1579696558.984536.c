#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(650, "ones");
	float **B = create_two_dim_float(780, 790, "ones");
	float **C = create_two_dim_float(330, 610, "ones");

	for (int c = 4; c < 610; c++)
	  for (int b = 2; b < 330; b++)
	    for (int a = 2; a < 330; a++)
	    {
	      
	      C[a][b]=C[a-1][b-4]+B[a][b]-A[a];
	      
	      A[a]=A[a-2]+0.973;
	      
	      B[a][b]=C[a][b]-A[a];
	      B[a][b]=0.919-A[a];
	      
	      float var_a=B[a][b]/0.06;
	      float var_b=B[a][b-4]-0.419;
	    }

    return 0;
}