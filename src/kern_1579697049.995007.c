#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(690, 310, 850, "zeros");
	float **A = create_two_dim_float(340, 880, "zeros");
	float **C = create_two_dim_float(320, 790, "zeros");

	for (int d = 1; d < 849; d++)
	  for (int c = 3; c < 308; c++)
	    for (int b = 5; b < 318; b++)
	      for (int a = 5; a < 318; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]/C[a][b];
	        
	       B[a][b][c]=B[a-5][b-2][c-1]*0.561;
	        
	       C[a][b]=C[a+2][b+5]-0.759;
	        
	       B[a][b][c]=B[a+4][b+2][c+1]+A[a][b]/A[a][b];
	        
	       float var_a=C[a][b]-0.278;
	       float var_b=C[a-4][b]/0.704;
	        
	       float var_c=A[a][b]-0.926;
	       float var_d=A[a+5][b]/0.894;
	      }

    return 0;
}