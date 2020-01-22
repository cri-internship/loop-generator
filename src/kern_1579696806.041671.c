#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(230, 330, "zeros");
	float ***A = create_three_dim_float(910, 530, 140, "zeros");

	for (int d = 4; d < 136; d++)
	  for (int c = 4; c < 326; c++)
	    for (int b = 3; b < 225; b++)
	      for (int a = 3; a < 225; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b][c-4]/B[a][b];
	        
	       B[a][b]=B[a-1][b-4]/0.476;
	        
	       A[a][b][c]=A[a+3][b+3][c+4]+0.464;
	        
	       B[a][b]=0.434;
	      }

    return 0;
}