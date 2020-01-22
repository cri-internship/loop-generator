#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(920, 730, 720, "ones");
	float *B = create_one_dim_float(220, "ones");
	float ***C = create_three_dim_float(30, 960, 670, "ones");

	for (int d = 2; d < 670; d++)
	  for (int c = 4; c < 727; c++)
	    for (int b = 3; b < 30; b++)
	      for (int a = 3; a < 30; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b-1][c-2]*0.881;
	        
	       A[a][b][c]=A[a+2][b+3][c]/C[a][b][c]-B[a];
	        
	       A[a][b][c]=A[a][b+2][c+1]-0.464;
	      }

    return 0;
}