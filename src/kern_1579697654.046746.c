#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(770, 180, "random");
	double ***C = create_three_dim_double(800, 50, 640, "random");
	double *A = create_one_dim_double(250, "random");

	for (int c = 1; c < 640; c++)
	  for (int b = 4; b < 50; b++)
	    for (int a = 5; a < 250; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]/0.121;
	      
	      A[a]=A[a-3]+0.923;
	      
	      A[a]=B[a][b]+A[a]-C[a][b][c];
	      B[a][b]=B[a+2][b+3]/C[a][b][c]*A[a];
	      
	      double var_a=B[a][b]+0.106;
	      double var_b=B[a-4][b-4]/0.685;
	      
	      C[a][b][c]=C[a][b][c]/B[a][b]+B[a][b];
	      A[a]=C[a-1][b][c-1]+A[a];
	      
	      B[a][b]=A[a]-B[a][b];
	      A[a]=A[a-5]/B[a][b];
	    }

    return 0;
}