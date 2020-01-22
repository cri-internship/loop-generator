#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(490, 260, "ones");
	double *C = create_one_dim_double(940, "ones");
	double **A = create_two_dim_double(860, 770, "ones");

	for (int d = 4; d < 940; d++)
	  for (int c = 4; c < 940; c++)
	    for (int b = 4; b < 940; b++)
	      for (int a = 4; a < 940; a++)
	      {
	        
	       C[a]=C[a-4]/0.438;
	      }

    return 0;
}