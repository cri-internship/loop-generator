#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(760, 710, 990, "ones");
	double *B = create_one_dim_double(770, "ones");

	for (int d = 5; d < 990; d++)
	  for (int c = 3; c < 710; c++)
	    for (int b = 0; b < 760; b++)
	      for (int a = 0; a < 760; a++)
	      {
	        
	       B[a]=A[a][b][c]/B[a];
	       A[a][b][c]=A[a][b-3][c-5]/0.598;
	      }

    return 0;
}