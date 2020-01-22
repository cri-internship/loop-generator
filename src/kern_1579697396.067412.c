#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(880, 480, 610, "zeros");

	for (int d = 5; d < 610; d++)
	  for (int c = 4; c < 480; c++)
	    for (int b = 3; b < 880; b++)
	      for (int a = 3; a < 880; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-4][c-5]-23;
	      }

    return 0;
}