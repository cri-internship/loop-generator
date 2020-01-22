#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(310, 30, 770, "ones");

	for (int d = 0; d < 770; d++)
	  for (int c = 2; c < 30; c++)
	    for (int b = 2; b < 310; b++)
	      for (int a = 2; a < 310; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c]*0.449;
	      }

    return 0;
}