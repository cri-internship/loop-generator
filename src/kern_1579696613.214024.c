#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(680, 930, "ones");
	float **A = create_two_dim_float(470, 770, "ones");
	float *C = create_one_dim_float(670, "ones");

	for (int d = 3; d < 770; d++)
	  for (int c = 1; c < 470; c++)
	    for (int b = 1; b < 470; b++)
	      for (int a = 1; a < 470; a++)
	      {
	        
	       B[a][b]=B[a-1][b-3]-0.932;
	        
	       A[a][b]=0.61;
	       A[a-1][b-3]=0.038;
	      }

    return 0;
}