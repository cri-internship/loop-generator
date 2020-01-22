#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(900, "zeros");
	float *B = create_one_dim_float(470, "zeros");
	float **A = create_two_dim_float(380, 1000, "zeros");

	for (int c = 3; c < 1000; c++)
	  for (int b = 3; b < 380; b++)
	    for (int a = 3; a < 380; a++)
	    {
	      
	      B[a]=B[a-3]*C[a]+A[a][b];
	      
	      B[a]=0.85;
	      
	      B[a]=B[a+4]*0.23;
	      
	      B[a]=B[a+3]-0.223;
	      
	      float var_b=C[a]-0.231;
	      C[a]=0.42;
	      
	      A[a][b]=0.215;
	      A[a-1][b-3]=0.168;
	    }

    return 0;
}