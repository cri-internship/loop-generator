#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(450, 380, 720, "ones");
	float *A = create_one_dim_float(80, "ones");
	float ***C = create_three_dim_float(940, 600, 150, "ones");

	for (int d = 5; d < 147; d++)
	  for (int c = 5; c < 377; c++)
	    for (int b = 5; b < 447; b++)
	      for (int a = 5; a < 447; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-1][c-5]+0.915;
	        
	       B[a][b][c]=B[a+3][b+3][c+1]-0.522;
	        
	       C[a][b][c]=C[a+4][b+3][c+3]-0.65;
	        
	       C[a][b][c]=C[a+2][b][c+3]+0.9;
	        
	       float var_a=C[a][b][c]-0.054;
	       float var_b=C[a][b-5][c-3]+0.634;
	      }

    return 0;
}