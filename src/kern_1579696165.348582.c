#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(840, 590, "ones");
	double **B = create_two_dim_double(650, 730, "ones");

	for (int d = 0; d < 586; d++)
	  for (int c = 0; c < 836; c++)
	    for (int b = 0; b < 836; b++)
	      for (int a = 0; a < 836; a++)
	      {
	        
	       A[a][b]=A[a+4][b+4]/0.819;
	      }

    return 0;
}