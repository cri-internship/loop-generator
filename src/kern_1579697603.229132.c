#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "zeros");
	double ***C = create_three_dim_double(200, 790, 200, "zeros");
	double ***E = create_three_dim_double(310, 600, 510, "zeros");
	double **B = create_two_dim_double(740, 370, "zeros");
	double **D = create_two_dim_double(310, 50, "zeros");

	for (int d = 3; d < 200; d++)
	  for (int c = 4; c < 370; c++)
	    for (int b = 5; b < 200; b++)
	      for (int a = 5; a < 200; a++)
	      {
	        
	       A[a]=A[a+3]*0.093+E[a][b][c]/C[a][b][c];
	        
	       B[a][b]=A[a]+D[a][b]*0.391;
	       B[a+4][b]=E[a][b][c]-C[a][b][c];
	        
	       C[a][b][c]=C[a][b][c]+E[a][b][c]/0.84*B[a][b];
	       E[a][b][c]=C[a-5][b-3][c-1]*B[a][b]/A[a]+E[a][b][c]-D[a][b];
	        
	       A[a]=E[a][b][c]+A[a]*D[a][b]/C[a][b][c]-B[a][b];
	       D[a][b]=E[a-1][b-2][c-3]-B[a][b]+0.818/A[a];
	        
	       double var_a=C[a][b][c]-0.74;
	       double var_b=C[a][b-4][c]/0.677;
	      }

    return 0;
}