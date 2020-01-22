#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(780, 610, 130, "zeros");

	for (int d = 2; d < 130; d++)
	  for (int c = 4; c < 610; c++)
	    for (int b = 1; b < 780; b++)
	      for (int a = 1; a < 780; a++)
	      {
	        
	       double var_a=A[a][b][c]*0.975;
	       double var_b=A[a-1][b-4][c-2]/0.931;
	      }

    return 0;
}