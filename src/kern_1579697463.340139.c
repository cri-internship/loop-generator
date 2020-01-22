#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(10, "ones");

	for (int d = 0; d < 10; d++)
	  for (int c = 0; c < 10; c++)
	    for (int b = 0; b < 10; b++)
	      for (int a = 0; a < 10; a++)
	      {
	        
	       double var_a=A[a]/0.291;
	       A[a]=0.202;
	      }

    return 0;
}