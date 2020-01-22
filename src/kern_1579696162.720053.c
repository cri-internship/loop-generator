#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(150, "zeros");
	float **C = create_two_dim_float(380, 940, "zeros");
	float *B = create_one_dim_float(950, "zeros");

	for (int c = 5; c < 940; c++)
	  for (int b = 5; b < 150; b++)
	    for (int a = 5; a < 150; a++)
	    {
	      
	      C[a][b]=C[a][b-3]/0.068;
	      
	      A[a]=0.131;
	      A[a-5]=0.637;
	      
	      A[a]=C[a][b]/B[a];
	      
	      float var_a=C[a][b]*0.754;
	      float var_b=C[a-4][b-5]*0.162;
	      
	      B[a]=B[a]/A[a];
	      A[a]=B[a-2]*C[a][b]-A[a];
	    }

    return 0;
}