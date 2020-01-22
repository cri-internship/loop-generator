#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(290, "zeros");
	float **C = create_two_dim_float(400, 550, "zeros");
	float *B = create_one_dim_float(750, "zeros");

	for (int c = 3; c < 750; c++)
	  for (int b = 3; b < 750; b++)
	    for (int a = 3; a < 750; a++)
	    {
	      
	      B[a]=B[a-3]-C[a][b]/A[a];
	      
	      B[a]=B[a-1]+0.331;
	      
	      float var_a=B[a]*0.248;
	    }

    return 0;
}