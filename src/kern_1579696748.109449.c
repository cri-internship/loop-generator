#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 950, "zeros");
	float *A = create_one_dim_float(790, "zeros");

	for (int d = 3; d < 946; d++)
	  for (int c = 4; c < 715; c++)
	    for (int b = 4; b < 715; b++)
	      for (int a = 4; a < 715; a++)
	      {
	        
	       B[a][b]=B[a-4][b-3]/A[a];
	        
	       A[a]=A[a-4]/0.364;
	        
	       B[a][b]=A[a];
	      }

    return 0;
}