#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(130, "zeros");
	float *B = create_one_dim_float(210, "zeros");
	float **C = create_two_dim_float(860, 410, "zeros");
	float *A = create_one_dim_float(430, "zeros");

	for (int c = 4; c < 128; c++)
	  for (int b = 4; b < 128; b++)
	    for (int a = 4; a < 128; a++)
	    {
	      
	      B[a]=B[a-3]-0.513;
	      
	      B[a]=B[a-1]*C[a][b]-D[a]/A[a];
	      
	      B[a]=B[a+4]*C[a][b]-A[a];
	      
	      D[a]=D[a+2]-0.883;
	      
	      A[a]=A[a]-B[a]+C[a][b];
	      C[a][b]=A[a-4]*D[a]+C[a][b]/B[a];
	    }

    return 0;
}