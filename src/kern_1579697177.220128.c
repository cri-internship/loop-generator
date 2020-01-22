#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(530, "zeros");
	double *A = create_one_dim_double(230, "zeros");
	double *B = create_one_dim_double(450, "zeros");

	for (int d = 0; d < 525; d++)
	  for (int c = 0; c < 525; c++)
	    for (int b = 0; b < 525; b++)
	      for (int a = 0; a < 525; a++)
	      {
	        
	       double var_a=C[a]-0.254;
	       double var_b=C[a+5]+0.225;
	      }

    return 0;
}