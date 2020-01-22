#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(50, 160, "zeros");
	double ***C = create_three_dim_double(470, 920, 890, "zeros");
	double ***B = create_three_dim_double(630, 550, 670, "zeros");

	for (int d = 1; d < 668; d++)
	  for (int c = 0; c < 545; c++)
	    for (int b = 2; b < 469; b++)
	      for (int a = 2; a < 469; a++)
	      {
	        
	       double var_a=C[a][b][c]+0.691;
	       double var_b=C[a+1][b+4][c+1]*0.552;
	        
	       C[a][b][c]=B[a][b][c]/A[a][b];
	       A[a][b]=B[a+4][b+5][c+1]+0.178-C[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]/A[a][b]*C[a][b][c];
	       B[a][b][c]=B[a][b][c+2]/A[a][b]-0.418;
	        
	       C[a][b][c]=C[a][b][c]*B[a][b][c]/B[a][b][c];
	       A[a][b]=C[a-2][b][c-1]+0.358;
	      }

    return 0;
}