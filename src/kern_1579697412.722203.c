#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(600, 790, "random");

	for (int d = 1; d < 790; d++)
	  for (int c = 3; c < 600; c++)
	    for (int b = 3; b < 600; b++)
	      for (int a = 3; a < 600; a++)
	      {
	        
	       double var_a=A[a][b]/0.983;
	       double var_b=A[a-3][b-1]*0.167;
	      }

    return 0;
}