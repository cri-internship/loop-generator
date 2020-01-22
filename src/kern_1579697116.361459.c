#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(210, "zeros");
	double *C = create_one_dim_double(700, "zeros");
	double **A = create_two_dim_double(590, 460, "zeros");
	double **D = create_two_dim_double(780, 440, "zeros");

	for (int d = 3; d < 210; d++)
	  for (int c = 3; c < 210; c++)
	    for (int b = 3; b < 210; b++)
	      for (int a = 3; a < 210; a++)
	      {
	        
	       B[a]=0.623;
	       B[a-3]=0.154;
	      }

    return 0;
}