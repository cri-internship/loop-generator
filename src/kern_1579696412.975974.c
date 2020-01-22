#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(790, 720, 230, "ones");
	float *B = create_one_dim_float(870, "ones");
	float ***A = create_three_dim_float(770, 590, 180, "ones");

	for (int d = 0; d < 177; d++)
	  for (int c = 0; c < 586; c++)
	    for (int b = 3; b < 767; b++)
	      for (int a = 3; a < 767; a++)
	      {
	        
	       B[a]=B[a-3]-0.754;
	        
	       A[a][b][c]=0.442;
	       A[a+3][b+4][c+3]=0.785;
	        
	       B[a]=C[a][b][c]*A[a][b][c];
	        
	       B[a]=B[a]+A[a][b][c];
	       A[a][b][c]=B[a-2]/A[a][b][c];
	      }

    return 0;
}