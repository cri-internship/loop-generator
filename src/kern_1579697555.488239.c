#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(200, "ones");
	float **C = create_two_dim_float(900, 90, "ones");
	float *A = create_one_dim_float(390, "ones");

	for (int c = 2; c < 87; c++)
	  for (int b = 4; b < 200; b++)
	    for (int a = 4; a < 200; a++)
	    {
	      
	      B[a]=B[a-4]-C[a][b]/A[a];
	      
	      A[a]=A[a-3]/B[a]-B[a];
	      
	      C[a][b]=C[a-1][b-2]+0.765;
	      
	      C[a][b]=C[a][b+3]*A[a]-B[a];
	      
	      B[a]=0.511;
	      
	      A[a]=0.714;
	    }

    return 0;
}