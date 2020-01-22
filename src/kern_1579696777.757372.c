#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(990, 740, 320, "ones");

	for (int d = 0; d < 315; d++)
	  for (int c = 0; c < 739; c++)
	    for (int b = 0; b < 985; b++)
	      for (int a = 0; a < 985; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+1][c+5]*0.943;
	      }

    return 0;
}