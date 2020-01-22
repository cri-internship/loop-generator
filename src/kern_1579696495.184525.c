#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(380, "ones");
	float **E = create_two_dim_float(500, 400, "ones");
	float *B = create_one_dim_float(70, "ones");
	float ***C = create_three_dim_float(510, 110, 580, "ones");
	float ***A = create_three_dim_float(700, 340, 120, "ones");

	for (int d = 0; d < 577; d++)
	  for (int c = 0; c < 105; c++)
	    for (int b = 5; b < 70; b++)
	      for (int a = 5; a < 70; a++)
	      {
	        
	       D[a]=D[a-5]/0.853;
	        
	       C[a][b][c]=C[a+3][b+5][c+3]-B[a]*0.418/D[a];
	        
	       float var_a=B[a]*0.492;
	      }

    return 0;
}