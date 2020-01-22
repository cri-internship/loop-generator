#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(920, "zeros");
	float *A = create_one_dim_float(100, "zeros");
	float **B = create_two_dim_float(650, 50, "zeros");

	for (int c = 3; c < 50; c++)
	  for (int b = 3; b < 100; b++)
	    for (int a = 3; a < 100; a++)
	    {
	      
	      C[a]=0.06;
	      float  var_a=C[a]*0.311;
	      
	      B[a][b]=0.724;
	      B[a-1][b-3]=0.159;
	      
	      B[a][b]=A[a]/0.67;
	      C[a]=A[a-3]+C[a];
	    }

    return 0;
}