#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(790, 500, "ones");
	float **B = create_two_dim_float(730, 730, "ones");

	for (int d = 5; d < 500; d++)
	  for (int c = 1; c < 790; c++)
	    for (int b = 1; b < 790; b++)
	      for (int a = 1; a < 790; a++)
	      {
	        
	       A[a][b]=0.519;
	       A[a-1][b-5]=0.976;
	      }

    return 0;
}