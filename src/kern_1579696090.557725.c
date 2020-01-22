#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(200, "random");
	float ***A = create_three_dim_float(450, 710, 130, "random");
	float ***C = create_three_dim_float(190, 280, 40, "random");

	for (int d = 3; d < 39; d++)
	  for (int c = 3; c < 277; c++)
	    for (int b = 4; b < 188; b++)
	      for (int a = 4; a < 188; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-1][c-3]*C[a][b][c];
	        
	       C[a][b][c]=A[a][b][c];
	       C[a][b-3][c-3]=B[a];
	        
	       B[a]=0.544;
	       B[a-1]=0.632;
	        
	       float var_a=C[a][b][c]+0.775;
	       float var_b=C[a+2][b+3][c+1]*0.051;
	      }

    return 0;
}