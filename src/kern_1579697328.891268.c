#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(240, 970, 440, "ones");

	for (int d = 0; d < 440; d++)
	  for (int c = 3; c < 970; c++)
	    for (int b = 2; b < 240; b++)
	      for (int a = 2; a < 240; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c]*38;
	      }

    return 0;
}