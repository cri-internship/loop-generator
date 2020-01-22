#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(240, 10, 970, "random");
	double ***B = create_three_dim_double(800, 560, 180, "random");
	double **A = create_two_dim_double(320, 680, "random");

	for (int d = 5; d < 180; d++)
	  for (int c = 2; c < 560; c++)
	    for (int b = 5; b < 316; b++)
	      for (int a = 5; a < 316; a++)
	      {
	        
	       A[a][b]=A[a-5][b-1]-0.858;
	        
	       B[a][b][c]=B[a-2][b-2][c-2]/0.554;
	        
	       A[a][b]=0.359;
	        
	       double var_a=B[a][b][c]+0.752;
	       double var_b=B[a-1][b-1][c-5]-0.759;
	        
	       A[a][b]=A[a][b]-C[a][b][c];
	       B[a][b][c]=A[a+2][b+4]-0.366/C[a][b][c];
	      }

    return 0;
}