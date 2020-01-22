#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(940, 930, 480, "zeros");
	float **C = create_two_dim_float(120, 980, "zeros");
	float ***D = create_three_dim_float(500, 550, 970, "zeros");
	float *B = create_one_dim_float(200, "zeros");
	float *E = create_one_dim_float(860, "zeros");

	for (int d = 2; d < 965; d++)
	  for (int c = 0; c < 545; c++)
	    for (int b = 5; b < 498; b++)
	      for (int a = 5; a < 498; a++)
	      {
	        
	       E[a]=E[a-4]+0.286;
	        
	       D[a][b][c]=D[a+2][b+5][c+5]/C[a][b];
	        
	       D[a][b][c]=B[a]*0.355-E[a];
	        
	       E[a]=0.701;
	        
	       float var_a=D[a][b][c]+0.837;
	       float var_b=D[a-1][b][c-2]-0.445;
	        
	       D[a][b][c]=E[a]*D[a][b][c]/A[a][b][c]-B[a]+C[a][b];
	       E[a]=E[a-5]/C[a][b];
	      }

    return 0;
}