#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(190, "ones");
	float **C = create_two_dim_float(610, 150, "ones");
	float **D = create_two_dim_float(400, 10, "ones");
	float *A = create_one_dim_float(660, "ones");

	for (int c = 0; c < 10; c++)
	  for (int b = 0; b < 399; b++)
	    for (int a = 0; a < 399; a++)
	    {
	      
	      C[a][b]=B[a];
	      C[a][b+5]=D[a][b]+A[a];
	      
	      A[a]=C[a][b]/A[a]+B[a]-0.029;
	      D[a][b]=C[a][b+3]*B[a]-0.637;
	      
	      C[a][b]=D[a][b]/0.121-C[a][b]+A[a];
	      B[a]=D[a+1][b]/C[a][b]+A[a];
	    }

    return 0;
}