#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(620, 470, "ones");
	float *B = create_one_dim_float(310, "ones");
	float *C = create_one_dim_float(650, "ones");

	for (int c = 3; c < 310; c++)
	  for (int b = 3; b < 310; b++)
	    for (int a = 3; a < 310; a++)
	    {
	      
	      C[a]=C[a-3]*A[a][b];
	      
	      float var_a=B[a]/0.738;
	      float var_b=B[a]*0.643;
	      
	      A[a][b]=B[a]+C[a];
	      C[a]=B[a-2]*A[a][b];
	    }

    return 0;
}