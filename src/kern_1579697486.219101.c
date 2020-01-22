#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(440, 50, 140, "ones");
	float *C = create_one_dim_float(190, "ones");
	float *A = create_one_dim_float(80, "ones");
	float **B = create_two_dim_float(880, 120, "ones");

	for (int d = 0; d < 76; d++)
	  for (int c = 0; c < 76; c++)
	    for (int b = 0; b < 76; b++)
	      for (int a = 0; a < 76; a++)
	      {
	        
	       A[a]=D[a][b][c];
	       A[a+4]=B[a][b]/C[a];
	      }

    return 0;
}