#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(500, 460, 440, "zeros");

	for (int d = 0; d < 438; d++)
	  for (int c = 0; c < 459; c++)
	    for (int b = 0; b < 499; b++)
	      for (int a = 0; a < 499; a++)
	      {
	        
	       float var_a=A[a][b][c]/0.89;
	       float var_b=A[a+1][b+1][c+2]+0.856;
	      }

    return 0;
}