#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(760, 250, "random");
	double *B = create_one_dim_double(950, "random");
	double *C = create_one_dim_double(910, "random");

	for (int d = 3; d < 250; d++)
	  for (int c = 1; c < 760; c++)
	    for (int b = 1; b < 760; b++)
	      for (int a = 1; a < 760; a++)
	      {
	        
	       A[a][b]=A[a-1][b-3]-0.978;
	      }

    return 0;
}