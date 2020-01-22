#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(190, 310, "ones");
	float *B = create_one_dim_float(560, "ones");
	float **A = create_two_dim_float(140, 110, "ones");

	for (int c = 5; c < 108; c++)
	  for (int b = 3; b < 136; b++)
	    for (int a = 3; a < 136; a++)
	    {
	      
	      float var_a=B[a]-0.589;
	      B[a]=0.905;
	      
	      C[a][b]=0.639*B[a];
	      C[a-3][b-5]=A[a][b];
	      
	      C[a][b]=A[a][b]-0.526;
	      B[a]=A[a+4][b+2]/C[a][b];
	    }

    return 0;
}