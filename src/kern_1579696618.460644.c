#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(500, 20, 980, "ones");

	for (int d = 0; d < 980; d++)
	  for (int c = 0; c < 16; c++)
	    for (int b = 0; b < 499; b++)
	      for (int a = 0; a < 499; a++)
	      {
	        
	       A[a][b][c]=0.898;
	       A[a+1][b+4][c]=0.402;
	      }

    return 0;
}