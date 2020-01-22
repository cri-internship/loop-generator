#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(230, "ones");
	float ***B = create_three_dim_float(860, 810, 920, "ones");
	float ***A = create_three_dim_float(790, 40, 560, "ones");

	for (int d = 0; d < 556; d++)
	  for (int c = 0; c < 37; c++)
	    for (int b = 0; b < 226; b++)
	      for (int a = 0; a < 226; a++)
	      {
	        
	       C[a]=C[a]-A[a][b][c]*B[a][b][c];
	       B[a][b][c]=C[a+4]+0.997/B[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]/C[a];
	       B[a][b][c]=A[a+3][b+3][c+4]-C[a];
	      }

    return 0;
}