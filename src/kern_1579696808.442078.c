#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(120, 750, 330, "ones");
	float ***B = create_three_dim_float(590, 620, 260, "ones");
	float *C = create_one_dim_float(440, "ones");

	for (int d = 2; d < 326; d++)
	  for (int c = 3; c < 745; c++)
	    for (int b = 3; b < 117; b++)
	      for (int a = 3; a < 117; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-2]/B[a][b][c]*C[a];
	        
	       A[a][b][c]=A[a-3][b-1][c-2]/0.089;
	        
	       A[a][b][c]=A[a+3][b+5][c+4]-0.406;
	        
	       C[a]=A[a][b][c];
	       C[a+2]=B[a][b][c];
	        
	       float var_a=C[a]+0.073;
	       float var_b=C[a]+0.067;
	      }

    return 0;
}