#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(690, "zeros");

	for (int d = 3; d < 687; d++)
	  for (int c = 3; c < 687; c++)
	    for (int b = 3; b < 687; b++)
	      for (int a = 3; a < 687; a++)
	      {
	        
	       A[a]=0.042;
	       A[a+3]=0.084;
	        
	       double var_a=A[a]/0.931;
	       double var_b=A[a-3]-0.602;
	      }

    return 0;
}