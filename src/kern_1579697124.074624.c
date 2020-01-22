#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(780, "ones");
	double ***A = create_three_dim_double(10, 20, 460, "ones");

	for (int d = 0; d < 456; d++)
	  for (int c = 0; c < 20; c++)
	    for (int b = 0; b < 5; b++)
	      for (int a = 0; a < 5; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b][c+4]-B[a];
	      }

    return 0;
}