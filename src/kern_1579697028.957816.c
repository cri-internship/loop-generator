#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(730, 140, "ones");
	float ***D = create_three_dim_float(360, 620, 130, "ones");
	float **A = create_two_dim_float(560, 70, "ones");
	float *C = create_one_dim_float(530, "ones");

	for (int d = 0; d < 129; d++)
	  for (int c = 5; c < 70; c++)
	    for (int b = 3; b < 358; b++)
	      for (int a = 3; a < 358; a++)
	      {
	        
	       A[a][b]=A[a-3][b-1]+C[a];
	        
	       D[a][b][c]=D[a+2][b+5][c+1]-B[a][b];
	        
	       A[a][b]=A[a][b]-D[a][b][c]+D[a][b][c]*B[a][b];
	       D[a][b][c]=A[a-3][b-5]+B[a][b];
	        
	       float var_a=A[a][b]/0.031;
	       float var_b=A[a+5][b]/0.672;
	        
	       float var_c=C[a]/0.953;
	       float var_d=C[a-2]-0.953;
	      }

    return 0;
}