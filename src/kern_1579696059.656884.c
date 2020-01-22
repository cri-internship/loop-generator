#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(990, "ones");
	float **A = create_two_dim_float(630, 50, "ones");
	float ***D = create_three_dim_float(580, 400, 700, "ones");
	float **B = create_two_dim_float(790, 280, "ones");

	for (int d = 0; d < 698; d++)
	  for (int c = 3; c < 50; c++)
	    for (int b = 4; b < 575; b++)
	      for (int a = 4; a < 575; a++)
	      {
	        
	       C[a]=C[a-4]-0.333;
	        
	       A[a][b]=A[a-2][b-3]+0.731;
	        
	       C[a]=C[a-1]/0.236;
	        
	       D[a][b][c]=D[a+5][b+4][c+2]/0.702;
	        
	       B[a][b]=C[a]/A[a][b];
	       B[a+4][b+4]=D[a][b][c]*A[a][b];
	        
	       float var_a=B[a][b]*0.977;
	       float var_b=B[a-1][b-2]-0.245;
	        
	       D[a][b][c]=B[a][b]-D[a][b][c]*A[a][b]/C[a];
	       C[a]=B[a+5][b+3]-A[a][b]/D[a][b][c];
	      }

    return 0;
}