#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(680, 650, 940, "ones");
	float **B = create_two_dim_float(420, 490, "ones");
	float **C = create_two_dim_float(800, 230, "ones");

	for (int d = 1; d < 938; d++)
	  for (int c = 3; c < 230; c++)
	    for (int b = 3; b < 420; b++)
	      for (int a = 3; a < 420; a++)
	      {
	        
	       C[a][b]=C[a][b-1]/0.281;
	        
	       A[a][b][c]=0.309;
	       A[a-3][b-1][c-1]=0.717;
	        
	       float var_a=A[a][b][c]*0.178;
	       float var_b=A[a+4][b][c+2]+0.845;
	        
	       float var_c=B[a][b]/0.861;
	       float var_d=B[a-1][b-3]+0.149;
	      }

    return 0;
}