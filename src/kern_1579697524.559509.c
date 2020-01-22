#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(910, "zeros");
	float **A = create_two_dim_float(680, 630, "zeros");
	float **B = create_two_dim_float(680, 920, "zeros");

	for (int c = 4; c < 630; c++)
	  for (int b = 3; b < 679; b++)
	    for (int a = 3; a < 679; a++)
	    {
	      
	      A[a][b]=A[a-3][b-4]*C[a];
	      
	      B[a][b]=B[a-2][b-3]/A[a][b]+C[a];
	      
	      B[a][b]=B[a+1][b+2]/C[a]-A[a][b];
	      
	      C[a]=0.654;
	      C[a+1]=0.931;
	      
	      A[a][b]=C[a]-0.464;
	      
	      float var_a=C[a]/0.642;
	      float var_b=C[a-1]-0.377;
	    }

    return 0;
}