#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(320, 150, "ones");
	float *A = create_one_dim_float(470, "ones");
	float **C = create_two_dim_float(50, 480, "ones");

	for (int c = 5; c < 150; c++)
	  for (int b = 2; b < 50; b++)
	    for (int a = 2; a < 50; a++)
	    {
	      
	      C[a][b]=C[a-2][b-5]*0.006;
	      
	      C[a][b]=C[a][b-3]-0.42;
	      
	      float var_a=B[a][b]+0.447;
	      float var_b=B[a-2][b-2]*0.795;
	    }

    return 0;
}