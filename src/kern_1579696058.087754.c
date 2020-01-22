#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(150, 580, 810, "zeros");
	float *B = create_one_dim_float(730, "zeros");
	float *C = create_one_dim_float(250, "zeros");

	for (int d = 0; d < 805; d++)
	  for (int c = 0; c < 575; c++)
	    for (int b = 4; b < 145; b++)
	      for (int a = 4; a < 145; a++)
	      {
	        
	       C[a]=C[a-4]/A[a][b][c]-0.32;
	        
	       B[a]=B[a-1]*C[a]+C[a];
	        
	       A[a][b][c]=A[a+5][b+5][c+5]*C[a]-B[a];
	        
	       float var_a=C[a]-0.742;
	       float var_b=C[a+3]+0.799;
	      }

    return 0;
}