#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(740, 680, "ones");
	double ***D = create_three_dim_double(380, 480, 880, "ones");
	double ***C = create_three_dim_double(240, 430, 320, "ones");
	double ***E = create_three_dim_double(860, 240, 150, "ones");
	double ***B = create_three_dim_double(10, 550, 600, "ones");

	for (int d = 4; d < 149; d++)
	  for (int c = 5; c < 239; c++)
	    for (int b = 1; b < 8; b++)
	      for (int a = 1; a < 8; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-5][c-3]-0.981;
	        
	       A[a][b]=A[a+3][b+5]/0.407;
	        
	       B[a][b][c]=B[a+2][b+4][c+5]-0.318;
	        
	       C[a][b][c]=C[a+1][b+3][c+4]/0.878;
	        
	       C[a][b][c]=0.123;
	        
	       D[a][b][c]=C[a][b][c]/E[a][b][c]*D[a][b][c];
	       E[a][b][c]=C[a][b-1][c-4]/0.54-A[a][b];
	        
	       double var_a=E[a][b][c]*0.498;
	       double var_b=E[a][b+1][c+1]*0.856;
	      }

    return 0;
}