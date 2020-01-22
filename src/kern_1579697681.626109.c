#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(380, 420, "ones");
	double **D = create_two_dim_double(500, 150, "ones");
	double ***B = create_three_dim_double(190, 540, 580, "ones");
	double **C = create_two_dim_double(700, 300, "ones");
	double ***A = create_three_dim_double(870, 610, 620, "ones");

	for (int d = 5; d < 577; d++)
	  for (int c = 5; c < 146; c++)
	    for (int b = 2; b < 186; b++)
	      for (int a = 2; a < 186; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b][c-5]/B[a][b][c]+C[a][b]*D[a][b]-E[a][b];
	        
	       A[a][b][c]=A[a-2][b][c-4]*C[a][b]+B[a][b][c]/D[a][b];
	        
	       B[a][b][c]=B[a+4][b][c+3]-A[a][b][c]*D[a][b]/C[a][b];
	        
	       D[a][b]=D[a+2][b+4]+0.046;
	        
	       double var_a=A[a][b][c]-0.077;
	       double var_b=A[a-2][b-5][c]*0.346;
	        
	       B[a][b][c]=D[a][b]/0.404+E[a][b]*C[a][b]-B[a][b][c];
	       A[a][b][c]=D[a-1][b]+0.353*B[a][b][c]-E[a][b]/C[a][b];
	        
	       D[a][b]=A[a][b][c]-D[a][b]+0.969*E[a][b];
	       E[a][b]=A[a][b-2][c-1]/B[a][b][c]+D[a][b]*E[a][b];
	      }

    return 0;
}