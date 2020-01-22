#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(200, 990, 170, "zeros");
	float **B = create_two_dim_float(680, 670, "zeros");
	float **A = create_two_dim_float(630, 780, "zeros");

	for (int d = 1; d < 165; d++)
	  for (int c = 2; c < 668; c++)
	    for (int b = 3; b < 200; b++)
	      for (int a = 3; a < 200; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b][c-1]+0.322*B[a][b];
	        
	       B[a][b]=B[a+4][b+2]-0.527;
	        
	       C[a][b][c]=A[a][b]-C[a][b][c]*B[a][b];
	       B[a][b]=A[a-1][b-1]-B[a][b];
	        
	       A[a][b]=C[a][b][c]+A[a][b];
	       A[a][b]=C[a][b+1][c+5]/0.288*A[a][b];
	        
	       float var_a=A[a][b]+0.458;
	       float var_b=A[a+1][b+4]*0.896;
	        
	       C[a][b][c]=A[a][b]+C[a][b][c]*B[a][b];
	       A[a][b]=A[a-3][b-2]*0.074/B[a][b];
	      }

    return 0;
}