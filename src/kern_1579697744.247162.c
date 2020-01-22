#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(500, 210, "zeros");
	double ***C = create_three_dim_double(110, 100, 360, "zeros");
	double ***B = create_three_dim_double(950, 90, 410, "zeros");

	for (int d = 5; d < 405; d++)
	  for (int c = 3; c < 87; c++)
	    for (int b = 5; b < 499; b++)
	      for (int a = 5; a < 499; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+3][c]-A[a][b]/C[a][b][c];
	        
	       B[a][b][c]=0.391;
	        
	       A[a][b]=0.812;
	       A[a+1][b+2]=0.335;
	        
	       double var_a=B[a][b][c]*0.834;
	       double var_b=B[a-3][b-3][c-2]+0.306;
	        
	       C[a][b][c]=B[a][b][c]+C[a][b][c];
	       B[a][b][c]=B[a-5][b][c-5]-C[a][b][c]*0.337;
	      }

    return 0;
}