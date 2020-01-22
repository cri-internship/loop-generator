#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(30, 670, "ones");

	for (int d = 3; d < 670; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       A[a][b]=A[a-5][b-3]/0.512;
	      }

    return 0;
}