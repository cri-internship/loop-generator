#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(320, 130, 200, "random");
	float **D = create_two_dim_float(670, 190, "random");
	float **A = create_two_dim_float(560, 860, "random");
	float *B = create_one_dim_float(960, "random");

	for (int d = 4; d < 198; d++)
	  for (int c = 5; c < 126; c++)
	    for (int b = 4; b < 320; b++)
	      for (int a = 4; a < 320; a++)
	      {
	        
	       C[a][b][c]=0.523;
	       C[a-1][b-3][c-4]=0.266;
	        
	       C[a][b][c]=0.409;
	        
	       D[a][b]=0.91;
	       D[a+5][b+5]=0.533;
	        
	       A[a][b]=B[a]+C[a][b][c];
	       A[a-4][b-5]=D[a][b];
	      }

    return 0;
}