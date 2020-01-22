#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(880, 780, "zeros");

	for (int d = 0; d < 776; d++)
	  for (int c = 0; c < 876; c++)
	    for (int b = 0; b < 876; b++)
	      for (int a = 0; a < 876; a++)
	      {
	        
	       A[a][b]=A[a+4][b+4]-0.32;
	      }

    return 0;
}