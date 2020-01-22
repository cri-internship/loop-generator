#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(720, 580, 250, "ones");
	float ***B = create_three_dim_float(200, 810, 760, "ones");
	float *C = create_one_dim_float(660, "ones");

	for (int d = 1; d < 250; d++)
	  for (int c = 1; c < 577; c++)
	    for (int b = 4; b < 196; b++)
	      for (int a = 4; a < 196; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-1][c-1]*0.875;
	        
	       B[a][b][c]=B[a+3][b+2][c+3]*0.659;
	        
	       C[a]=B[a][b][c];
	       C[a-3]=0.946-B[a][b][c];
	        
	       B[a][b][c]=0.206;
	        
	       C[a]=A[a][b][c]*0.809;
	       B[a][b][c]=A[a][b+3][c]*C[a]/B[a][b][c];
	      }

    return 0;
}