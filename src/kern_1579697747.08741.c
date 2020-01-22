#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(920, 440, 480, "zeros");
	double *A = create_one_dim_double(780, "zeros");

	for (int d = 1; d < 477; d++)
	  for (int c = 2; c < 436; c++)
	    for (int b = 5; b < 915; b++)
	      for (int a = 5; a < 915; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-2][c-1]*0.196;
	        
	       B[a][b][c]=0.405;
	        
	       B[a][b][c]=B[a][b][c]*A[a];
	       A[a]=B[a+1][b][c+3]*0.061;
	        
	       double var_a=B[a][b][c]-0.563;
	       double var_b=B[a+1][b+2][c+2]+0.015;
	        
	       double var_c=B[a][b][c]*0.064;
	       double var_d=B[a+3][b+4][c+2]+0.341;
	        
	       B[a][b][c]=B[a][b][c]/A[a];
	       A[a]=B[a+5][b+1][c+1]+A[a];
	      }

    return 0;
}