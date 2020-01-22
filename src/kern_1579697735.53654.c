#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(310, "random");
	float **B = create_two_dim_float(320, 10, "random");

	for (int c = 4; c < 10; c++)
	  for (int b = 5; b < 305; b++)
	    for (int a = 5; a < 305; a++)
	    {
	      
	      B[a][b]=B[a-5][b-4]/0.711;
	      
	      A[a]=B[a][b];
	      B[a][b]=A[a]*0.234;
	      
	      A[a]=A[a+4]-0.002;
	      
	      float var_a=A[a]-0.808;
	    }

    return 0;
}