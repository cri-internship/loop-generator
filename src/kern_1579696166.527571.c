#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(520, 240, "random");
	float **A = create_two_dim_float(680, 520, "random");

	for (int d = 2; d < 240; d++)
	  for (int c = 3; c < 520; c++)
	    for (int b = 3; b < 520; b++)
	      for (int a = 3; a < 520; a++)
	      {
	        
	       B[a][b]=B[a-3][b]/0.77;
	        
	       A[a][b]=A[a-3][b-2]-B[a][b];
	      }

    return 0;
}