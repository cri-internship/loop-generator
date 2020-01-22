#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(190, 640, 250, "ones");
	float **D = create_two_dim_float(100, 360, "ones");
	float *A = create_one_dim_float(160, "ones");
	float **B = create_two_dim_float(560, 470, "ones");

	for (int d = 1; d < 470; d++)
	  for (int c = 3; c < 560; c++)
	    for (int b = 3; b < 560; b++)
	      for (int a = 3; a < 560; a++)
	      {
	        
	       B[a][b]=B[a-3][b-1]*0.293;
	      }

    return 0;
}