#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(50, 50, "ones");
	float ***C = create_three_dim_float(50, 50, 50, "ones");
	float *A = create_one_dim_float(100, "ones");

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 1; a < 50; a++)
	    {
	      A[a]=B[a][b]*C[a][b][c];
	      B[a][b]=A[a]*C[a][b][c]/0.01265;
	      C[a][b][c]=C[a-1][b][c]-A[a];
	      ;
	      A[a]=A[a]/0.34948;
	      A[a]=C[a][b][c]*B[a][b];
	      C[a][b][c]=C[a+1][b][c]+0.81985/B[a][b];
	      ;
	      ;
	      ;
	      ;
	      ;
	      A[a]=C[a][b][c]+B[a][b]-A[a];
	      float var_c=C[a][b][c]+0.49353;
	    }

    return 0;
}