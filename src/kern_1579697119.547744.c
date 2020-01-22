#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(590, "random");
	float ***A = create_three_dim_float(140, 240, 950, "random");
	float **B = create_two_dim_float(670, 670, "random");

	for (int d = 4; d < 670; d++)
	  for (int c = 3; c < 670; c++)
	    for (int b = 3; b < 670; b++)
	      for (int a = 3; a < 670; a++)
	      {
	        
	       B[a][b]=B[a-3][b-4]*0.601;
	      }

    return 0;
}