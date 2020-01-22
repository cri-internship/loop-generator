#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(160, "ones");
	float *A = create_one_dim_float(700, "ones");
	float ***C = create_three_dim_float(790, 990, 200, "ones");

	for (int d = 0; d < 197; d++)
	  for (int c = 0; c < 987; c++)
	    for (int b = 3; b < 159; b++)
	      for (int a = 3; a < 159; a++)
	      {
	        
	       B[a]=B[a-3]/0.747;
	        
	       B[a]=B[a+1]*0.748;
	        
	       C[a][b][c]=C[a+4][b+1][c+3]/0.829;
	        
	       float var_a=C[a][b][c]/0.802;
	       float var_b=C[a+2][b+3][c+1]+0.45;
	      }

    return 0;
}