#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(710, 330, 100, "random");
	double ***A = create_three_dim_double(780, 20, 60, "random");
	double **E = create_two_dim_double(320, 180, "random");
	double **B = create_two_dim_double(980, 680, "random");
	double *C = create_one_dim_double(490, "random");

	for (int d = 5; d < 60; d++)
	  for (int c = 4; c < 20; c++)
	    for (int b = 5; b < 487; b++)
	      for (int a = 5; a < 487; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b][c-5]/0.762;
	        
	       A[a][b][c]=A[a-4][b-1][c-1]*D[a][b][c];
	        
	       B[a][b]=0.563;
	       B[a-2][b-4]=0.404;
	        
	       double var_a=B[a][b]+0.745;
	       double var_b=B[a+5][b+5]+0.232;
	        
	       B[a][b]=C[a]/A[a][b][c]-B[a][b]*E[a][b]+B[a][b];
	       E[a][b]=C[a+3]*A[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]/C[a]+B[a][b];
	       D[a][b][c]=A[a-5][b-2][c-2]-0.887/B[a][b]*D[a][b][c];
	      }

    return 0;
}