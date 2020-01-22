#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(530, 910, "zeros");
	float **B = create_two_dim_float(920, 730, "zeros");

	for (int d = 4; d < 730; d++)
	  for (int c = 4; c < 920; c++)
	    for (int b = 4; b < 920; b++)
	      for (int a = 4; a < 920; a++)
	      {
	        
	       B[a][b]=0.055;
	       B[a-4][b-4]=0.373;
	      }

    return 0;
}