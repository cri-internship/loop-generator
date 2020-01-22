#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(930, "random");
	float *A = create_one_dim_float(730, "random");
	float *B = create_one_dim_float(370, "random");

	for (int c = 4; c < 370; c++)
	  for (int b = 4; b < 370; b++)
	    for (int a = 4; a < 370; a++)
	    {
	      
	      A[a]=A[a-4]-B[a];
	      
	      A[a]=C[a];
	      
	      A[a]=A[a+4]*0.874;
	      
	      B[a]=A[a];
	      B[a-3]=C[a]-A[a];
	      
	      float var_a=C[a]/0.962;
	      float var_b=C[a-2]-0.506;
	    }

    return 0;
}