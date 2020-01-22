#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(40, "random");
	double *C = create_one_dim_double(240, "random");
	double *B = create_one_dim_double(750, "random");

	for (int d = 0; d < 38; d++)
	  for (int c = 0; c < 38; c++)
	    for (int b = 0; b < 38; b++)
	      for (int a = 0; a < 38; a++)
	      {
	        
	       A[a]=A[a+2]/0.504;
	      }

    return 0;
}