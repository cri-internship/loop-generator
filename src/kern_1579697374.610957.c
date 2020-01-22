#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(370, "zeros");
	float ***D = create_three_dim_float(580, 430, 730, "zeros");
	float *B = create_one_dim_float(780, "zeros");
	float *A = create_one_dim_float(880, "zeros");

	for (int d = 0; d < 728; d++)
	  for (int c = 0; c < 425; c++)
	    for (int b = 3; b < 370; b++)
	      for (int a = 3; a < 370; a++)
	      {
	        
	       A[a]=A[a-3]-D[a][b][c];
	        
	       B[a]=B[a+1]*0.448;
	        
	       D[a][b][c]=D[a][b+4][c+1]*C[a];
	        
	       C[a]=B[a];
	       C[a]=0.769+D[a][b][c];
	        
	       float var_a=D[a][b][c]-0.811;
	       float var_b=D[a+2][b+5][c+2]*0.066;
	      }

    return 0;
}