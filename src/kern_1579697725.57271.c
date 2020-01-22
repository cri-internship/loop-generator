#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(680, "random");
	double **B = create_two_dim_double(780, 740, "random");

	for (int d = 3; d < 680; d++)
	  for (int c = 3; c < 680; c++)
	    for (int b = 3; b < 680; b++)
	      for (int a = 3; a < 680; a++)
	      {
	        
	       A[a]=A[a-3]/B[a][b];
	      }

    return 0;
}