#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(940, 10, "zeros");
	double **A = create_two_dim_double(510, 500, "zeros");

	for (int d = 0; d < 496; d++)
	  for (int c = 0; c < 505; c++)
	    for (int b = 0; b < 505; b++)
	      for (int a = 0; a < 505; a++)
	      {
	        
	       A[a][b]=A[a+5][b+4]/B[a][b];
	      }

    return 0;
}