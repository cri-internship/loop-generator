#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "random");
	double ***C = create_three_dim_double(600, 80, 900, "random");
	double ***E = create_three_dim_double(230, 620, 140, "random");
	double ***D = create_three_dim_double(850, 500, 650, "random");
	double ***B = create_three_dim_double(560, 350, 750, "random");

	for (int d = 4; d < 137; d++)
	  for (int c = 1; c < 615; c++)
	    for (int b = 5; b < 226; b++)
	      for (int a = 5; a < 226; a++)
	      {
	        
	       E[a][b][c]=E[a-5][b-1][c-4]+0.545;
	        
	       E[a][b][c]=E[a][b][c-2]*D[a][b][c];
	        
	       A[a]=E[a][b][c]+C[a][b][c]*B[a][b][c]/E[a][b][c];
	       C[a][b][c]=A[a]/C[a][b][c];
	        
	       E[a][b][c]=E[a+1][b][c+3]+0.727;
	        
	       E[a][b][c]=E[a+4][b+5][c+2]+A[a]/C[a][b][c]*D[a][b][c]-B[a][b][c];
	        
	       B[a][b][c]=E[a][b][c]/0.569-A[a]+B[a][b][c];
	       A[a]=E[a-1][b-1][c]-B[a][b][c];
	        
	       double var_a=E[a][b][c]+0.979;
	       double var_b=E[a+2][b+5][c+2]/0.663;
	      }

    return 0;
}