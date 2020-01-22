#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(880, "ones");

	for (int d = 0; d < 875; d++)
	  for (int c = 0; c < 875; c++)
	    for (int b = 0; b < 875; b++)
	      for (int a = 0; a < 875; a++)
	      {
	        
	       A[a]=A[a+5]-0.274;
	      }

    return 0;
}