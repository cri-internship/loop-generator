#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(30, 190, "ones");
	double *A = create_one_dim_double(510, "ones");

	for (int d = 0; d < 505; d++)
	  for (int c = 0; c < 505; c++)
	    for (int b = 0; b < 505; b++)
	      for (int a = 0; a < 505; a++)
	      {
	        
	       A[a]=A[a+5]-B[a][b];
	      }

    return 0;
}