#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(490, 530, 290, "ones");
	float *C = create_one_dim_float(270, "ones");
	float ***B = create_three_dim_float(860, 110, 330, "ones");
	float *D = create_one_dim_float(940, "ones");

	for (int d = 4; d < 289; d++)
	  for (int c = 4; c < 108; c++)
	    for (int b = 3; b < 486; b++)
	      for (int a = 3; a < 486; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+2][c+2]-0.565;
	        
	       A[a][b][c]=A[a+4][b+3][c+1]-0.325;
	        
	       B[a][b][c]=0.276+C[a]/C[a];
	        
	       D[a]=B[a][b][c]*C[a]-A[a][b][c];
	       D[a+2]=C[a];
	        
	       D[a]=A[a][b][c];
	        
	       float var_a=D[a]/0.421;
	       float var_b=D[a-1]*0.045;
	      }

    return 0;
}