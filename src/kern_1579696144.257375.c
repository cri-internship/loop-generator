#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(760, 600, 260, "random");
	double *E = create_one_dim_double(950, "random");
	double **C = create_two_dim_double(680, 100, "random");
	double *A = create_one_dim_double(790, "random");
	double **B = create_two_dim_double(340, 670, "random");

	for (int c = 1; c < 667; c++)
	  for (int b = 3; b < 340; b++)
	    for (int a = 3; a < 340; a++)
	    {
	      
	      A[a]=A[a-3]-0.339;
	      
	      B[a][b]=B[a-2][b-1]-0.807+A[a]*C[a][b];
	      
	      C[a][b]=B[a][b]/D[a][b][c]-E[a]*C[a][b];
	      
	      A[a]=0.658;
	      
	      B[a][b]=D[a][b][c]/C[a][b];
	      
	      double var_a=B[a][b]/0.78;
	      double var_b=B[a-3][b]+0.672;
	      
	      A[a]=E[a]-B[a][b]/B[a][b];
	    }

    return 0;
}