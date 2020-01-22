#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(540, 250, 860, "ones");
	float **B = create_two_dim_float(880, 340, "ones");
	float ***C = create_three_dim_float(240, 680, 500, "ones");
	float **A = create_two_dim_float(730, 390, "ones");

	for (int d = 0; d < 856; d++)
	  for (int c = 5; c < 247; c++)
	    for (int b = 5; b < 537; b++)
	      for (int a = 5; a < 537; a++)
	      {
	        
	       B[a][b]=B[a][b-1]+0.788*A[a][b]/C[a][b][c];
	        
	       B[a][b]=B[a-5][b-5]-D[a][b][c]/C[a][b][c];
	        
	       D[a][b][c]=D[a+3][b+3][c+4]/0.353;
	        
	       A[a][b]=0.307;
	       A[a+2][b+3]=0.639;
	        
	       float var_a=B[a][b]/0.543;
	       float var_b=B[a+1][b+3]-0.425;
	      }

    return 0;
}