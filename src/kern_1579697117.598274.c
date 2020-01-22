#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(90, "zeros");
	float ***A = create_three_dim_float(910, 620, 140, "zeros");

	for (int d = 3; d < 136; d++)
	  for (int c = 0; c < 617; c++)
	    for (int b = 5; b < 87; b++)
	      for (int a = 5; a < 87; a++)
	      {
	        
	       B[a]=B[a-5]/0.414;
	        
	       A[a][b][c]=A[a+2][b][c+4]*0.252;
	        
	       B[a]=A[a][b][c];
	        
	       A[a][b][c]=0.487;
	        
	       float var_a=A[a][b][c]*0.745;
	       float var_b=A[a-4][b][c-3]*0.508;
	        
	       float var_c=B[a]+0.556;
	       float var_d=B[a-4]*0.942;
	      }

    return 0;
}