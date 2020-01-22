#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(700, "ones");
	float **D = create_two_dim_float(180, 140, "ones");
	float ***C = create_three_dim_float(940, 540, 640, "ones");
	float *B = create_one_dim_float(310, "ones");

	for (int d = 0; d < 637; d++)
	  for (int c = 2; c < 140; c++)
	    for (int b = 2; b < 176; b++)
	      for (int a = 2; a < 176; a++)
	      {
	        
	       D[a][b]=D[a-2][b-2]/A[a];
	        
	       C[a][b][c]=C[a+2][b][c+3]+0.773;
	        
	       A[a]=0.899;
	       A[a]=0.449;
	        
	       D[a][b]=D[a][b]+B[a];
	       A[a]=D[a+4][b]-0.977;
	        
	       float var_a=A[a]+0.08;
	       float var_b=A[a+5]*0.07;
	      }

    return 0;
}