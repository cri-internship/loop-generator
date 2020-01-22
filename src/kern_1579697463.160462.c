#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(160, 360, "zeros");
	float *A = create_one_dim_float(780, "zeros");
	float **D = create_two_dim_float(320, 80, "zeros");
	float ***C = create_three_dim_float(220, 880, 50, "zeros");
	float *B = create_one_dim_float(810, "zeros");

	for (int d = 4; d < 75; d++)
	  for (int c = 5; c < 319; c++)
	    for (int b = 5; b < 319; b++)
	      for (int a = 5; a < 319; a++)
	      {
	        
	       D[a][b]=D[a-3][b-4]+0.15;
	        
	       A[a]=A[a-5]/0.879;
	        
	       D[a][b]=D[a][b+2]+0.359;
	        
	       D[a][b]=D[a+1][b+5]-B[a];
	        
	       float var_a=A[a]-0.474;
	       float var_b=A[a-1]-0.518;
	        
	       float var_c=B[a]*0.11;
	       float var_d=B[a-1]-0.859;
	      }

    return 0;
}