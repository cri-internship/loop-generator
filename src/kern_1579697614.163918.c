#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(970, 710, "ones");

	for (int d = 1; d < 710; d++)
	  for (int c = 4; c < 970; c++)
	    for (int b = 4; b < 970; b++)
	      for (int a = 4; a < 970; a++)
	      {
	        
	       A[a][b]=A[a-2][b-1]/0.137;
	        
	       A[a][b]=0.891;
	      }

    return 0;
}