#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(770, 570, 30, "random");

	for (int d = 2; d < 30; d++)
	  for (int c = 3; c < 570; c++)
	    for (int b = 1; b < 770; b++)
	      for (int a = 1; a < 770; a++)
	      {
	        
	       A[a][b][c]=13;
	       A[a-1][b-3][c-2]=32;
	      }

    return 0;
}