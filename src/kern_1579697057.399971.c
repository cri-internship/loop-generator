#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(220, "ones");
	float **B = create_two_dim_float(510, 630, "ones");

	for (int d = 3; d < 630; d++)
	  for (int c = 1; c < 510; c++)
	    for (int b = 1; b < 510; b++)
	      for (int a = 1; a < 510; a++)
	      {
	        
	       B[a][b]=0.468;
	       B[a-1][b-3]=0.579;
	      }

    return 0;
}