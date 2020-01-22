#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(160, 470, "random");
	float ***A = create_three_dim_float(370, 440, 960, "random");

	for (int d = 2; d < 960; d++)
	  for (int c = 4; c < 440; c++)
	    for (int b = 4; b < 160; b++)
	      for (int a = 4; a < 160; a++)
	      {
	        
	       B[a][b]=B[a-4][b-4]*A[a][b][c];
	        
	       A[a][b][c]=A[a-4][b-1][c-2]-0.882;
	        
	       B[a][b]=B[a-2][b-3]-0.13;
	      }

    return 0;
}