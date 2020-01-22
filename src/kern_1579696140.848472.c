#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(680, 930, 200, "ones");
	double *E = create_one_dim_double(380, "ones");
	double **C = create_two_dim_double(170, 590, "ones");
	double **D = create_two_dim_double(920, 490, "ones");
	double *B = create_one_dim_double(560, "ones");

	for (int c = 3; c < 200; c++)
	  for (int b = 2; b < 587; b++)
	    for (int a = 4; a < 167; a++)
	    {
	      
	      C[a][b]=C[a+2][b]/0.553;
	      
	      B[a]=B[a+3]+0.201;
	      
	      C[a][b]=C[a+3][b+3]/E[a]+D[a][b]*A[a][b][c];
	      
	      A[a][b][c]=B[a]+C[a][b]-B[a]/C[a][b];
	      A[a-4][b-2][c-3]=B[a]-D[a][b]+E[a];
	      
	      double var_a=B[a]/0.458;
	      double var_b=B[a+4]*0.429;
	    }

    return 0;
}