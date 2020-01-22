#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(260, 680, "ones");
	float ***A = create_three_dim_float(960, 180, 130, "ones");
	float ***C = create_three_dim_float(120, 30, 160, "ones");

	for (int d = 2; d < 130; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 4; b < 120; b++)
	      for (int a = 4; a < 120; a++)
	      {
	        
	       B[a][b]=B[a-3][b-1]/0.666;
	        
	       C[a][b][c]=C[a-2][b][c]-B[a][b]*B[a][b];
	        
	       A[a][b][c]=A[a-2][b-5][c-1]+C[a][b][c]-B[a][b];
	        
	       A[a][b][c]=A[a-4][b][c-2]-0.65;
	      }

    return 0;
}