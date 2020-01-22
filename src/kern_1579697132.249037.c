#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(540, 780, 330, "zeros");
	float **B = create_two_dim_float(400, 880, "zeros");

	for (int d = 4; d < 330; d++)
	  for (int c = 4; c < 780; c++)
	    for (int b = 3; b < 395; b++)
	      for (int a = 3; a < 395; a++)
	      {
	        
	       B[a][b]=B[a+5][b]/0.418;
	        
	       A[a][b][c]=0.768;
	       A[a-3][b-4][c-4]=0.075;
	      }

    return 0;
}