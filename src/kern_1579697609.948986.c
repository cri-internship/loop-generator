#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(160, "ones");
	float ***B = create_three_dim_float(880, 730, 320, "ones");

	for (int d = 4; d < 320; d++)
	  for (int c = 5; c < 730; c++)
	    for (int b = 5; b < 160; b++)
	      for (int a = 5; a < 160; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b][c]+A[a];
	        
	       A[a]=A[a-5]-B[a][b][c];
	        
	       A[a]=B[a][b][c];
	        
	       A[a]=B[a][b][c]-A[a];
	       B[a][b][c]=B[a-3][b-5][c-3]+A[a];
	        
	       float var_a=B[a][b][c]+0.503;
	       float var_b=B[a-4][b-1][c-4]/0.038;
	      }

    return 0;
}