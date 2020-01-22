#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(660, 200, 410, "ones");

	for (int d = 3; d < 410; d++)
	  for (int c = 1; c < 200; c++)
	    for (int b = 4; b < 660; b++)
	      for (int a = 4; a < 660; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-1][c-3]*45;
	      }

    return 0;
}