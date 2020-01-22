#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(750, "ones");
	double ***B = create_three_dim_double(480, 920, 560, "ones");
	double *C = create_one_dim_double(840, "ones");
	double **D = create_two_dim_double(50, 70, "ones");

	for (int c = 1; c < 560; c++)
	  for (int b = 5; b < 70; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      A[a]=A[a-5]+B[a][b][c];
	      
	      C[a]=0.55;
	      C[a]=0.244;
	      
	      A[a]=B[a][b][c]/A[a]+D[a][b];
	      B[a][b][c]=B[a-5][b-5][c-1]/C[a]*0.251-D[a][b];
	      
	      D[a][b]=D[a][b]+A[a]-B[a][b][c]*C[a];
	      C[a]=D[a-1][b-2]*0.922;
	    }

    return 0;
}