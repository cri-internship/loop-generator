#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(340, 420, "zeros");
	double ***D = create_three_dim_double(160, 290, 830, "zeros");
	double *A = create_one_dim_double(180, "zeros");
	double *C = create_one_dim_double(790, "zeros");

	for (int c = 1; c < 830; c++)
	  for (int b = 4; b < 290; b++)
	    for (int a = 4; a < 160; a++)
	    {
	      
	      C[a]=D[a][b][c]+B[a][b];
	      A[a]=D[a-4][b-4][c-1]/0.433;
	      
	      double var_a=A[a]+0.015;
	      double var_b=A[a-1]/0.214;
	    }

    return 0;
}