#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(550, "zeros");
	float *A = create_one_dim_float(870, "zeros");
	float ***C = create_three_dim_float(950, 90, 450, "zeros");

	for (int d = 0; d < 446; d++)
	  for (int c = 0; c < 88; c++)
	    for (int b = 0; b < 550; b++)
	      for (int a = 0; a < 550; a++)
	      {
	        
	       C[a][b][c]=C[a][b+1][c+3]*0.112;
	        
	       C[a][b][c]=C[a+2][b+2][c+4]*0.637;
	        
	       C[a][b][c]=B[a]/C[a][b][c];
	       B[a]=B[a]+0.161*A[a];
	      }

    return 0;
}