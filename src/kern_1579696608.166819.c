#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(700, 960, "zeros");
	float **B = create_two_dim_float(690, 210, "zeros");
	float ***C = create_three_dim_float(660, 580, 240, "zeros");
	float ***D = create_three_dim_float(670, 160, 880, "zeros");
	float ***E = create_three_dim_float(770, 240, 200, "zeros");

	for (int d = 5; d < 240; d++)
	  for (int c = 5; c < 160; c++)
	    for (int b = 3; b < 660; b++)
	      for (int a = 3; a < 660; a++)
	      {
	        
	       D[a][b][c]=D[a][b-4][c-4]-E[a][b][c]*A[a][b]/0.304+B[a][b];
	        
	       C[a][b][c]=C[a-2][b-5][c-5]/D[a][b][c]-0.578;
	        
	       A[a][b]=A[a+4][b+1]/D[a][b][c]-E[a][b][c];
	        
	       float var_a=D[a][b][c]+0.358;
	       float var_b=D[a-3][b-1][c-5]-0.298;
	      }

    return 0;
}