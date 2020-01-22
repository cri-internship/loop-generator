#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(780, "ones");
	double **A = create_two_dim_double(600, 730, "ones");
	double *B = create_one_dim_double(350, "ones");

	for (int d = 0; d < 350; d++)
	  for (int c = 0; c < 350; c++)
	    for (int b = 0; b < 350; b++)
	      for (int a = 0; a < 350; a++)
	      {
	        
	       B[a]=0.542;
	       B[a]=0.474;
	        
	       double var_a=C[a]*0.025;
	       double var_b=C[a+3]+0.273;
	      }

    return 0;
}