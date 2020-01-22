#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(860, 820, 630, "ones");

	for (int d = 0; d < 625; d++)
	  for (int c = 0; c < 819; c++)
	    for (int b = 0; b < 860; b++)
	      for (int a = 0; a < 860; a++)
	      {
	        
	       A[a][b][c]=42;
	       A[a][b+1][c+5]=20;
	      }

    return 0;
}