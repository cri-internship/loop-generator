#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(590, "ones");
	float ***B = create_three_dim_float(210, 820, 290, "ones");

	for (int d = 4; d < 286; d++)
	  for (int c = 3; c < 819; c++)
	    for (int b = 4; b < 208; b++)
	      for (int a = 4; a < 208; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-3][c-4]/0.902;
	        
	       A[a]=B[a][b][c];
	       B[a][b][c]=A[a]*B[a][b][c];
	        
	       B[a][b][c]=B[a+2][b+1][c+4]/A[a];
	        
	       A[a]=0.612;
	        
	       float var_a=B[a][b][c]*0.873;
	       float var_b=B[a-3][b-2][c-4]*0.333;
	        
	       A[a]=A[a]-B[a][b][c];
	       A[a]=A[a-2]-B[a][b][c];
	      }

    return 0;
}