#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(510, 780, "ones");
	double ***C = create_three_dim_double(300, 810, 600, "ones");
	double ***A = create_three_dim_double(330, 310, 700, "ones");
	double **B = create_two_dim_double(90, 260, "ones");

	for (int d = 0; d < 600; d++)
	  for (int c = 1; c < 309; c++)
	    for (int b = 2; b < 295; b++)
	      for (int a = 2; a < 295; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+1][c+2]+C[a][b][c]-D[a][b];
	        
	       C[a][b][c]=C[a+5][b+4][c]-0.426;
	        
	       A[a][b][c]=C[a][b][c]+A[a][b][c]/B[a][b];
	       B[a][b]=C[a+3][b+2][c]-B[a][b]+A[a][b][c];
	        
	       double var_a=D[a][b]*0.66;
	       double var_b=D[a][b-1]/0.092;
	        
	       D[a][b]=D[a][b]/C[a][b][c]-A[a][b][c];
	       C[a][b][c]=D[a-1][b]*C[a][b][c]/B[a][b]+0.562;
	        
	       D[a][b]=D[a][b]+B[a][b]-A[a][b][c]*C[a][b][c];
	       D[a][b]=D[a-2][b-1]*C[a][b][c];
	      }

    return 0;
}