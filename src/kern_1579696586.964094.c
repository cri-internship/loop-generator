#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(490, 630, "random");

	for (int d = 0; d < 628; d++)
	  for (int c = 0; c < 488; c++)
	    for (int b = 0; b < 488; b++)
	      for (int a = 0; a < 488; a++)
	      {
	        
	       A[a][b]=A[a+2][b+2]-24;
	        
	       A[a][b]=17;
	      }

    return 0;
}