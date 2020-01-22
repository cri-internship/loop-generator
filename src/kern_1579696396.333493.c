#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(240, 300, 140, "ones");
	float *D = create_one_dim_float(280, "ones");
	float ***B = create_three_dim_float(200, 810, 930, "ones");
	float **A = create_two_dim_float(940, 330, "ones");

	for (int d = 2; d < 140; d++)
	  for (int c = 0; c < 300; c++)
	    for (int b = 5; b < 198; b++)
	      for (int a = 5; a < 198; a++)
	      {
	        
	       C[a][b][c]=A[a][b];
	       C[a-5][b][c-2]=D[a];
	        
	       float var_a=B[a][b][c]*0.047;
	       float var_b=B[a+2][b][c+3]/0.944;
	      }

    return 0;
}