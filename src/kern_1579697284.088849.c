#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(290, 940, "random");
	double *A = create_one_dim_double(880, "random");

	for (int d = 3; d < 880; d++)
	  for (int c = 3; c < 880; c++)
	    for (int b = 3; b < 880; b++)
	      for (int a = 3; a < 880; a++)
	      {
	        
	       A[a]=B[a][b];
	       A[a-3]=0.093;
	      }

    return 0;
}