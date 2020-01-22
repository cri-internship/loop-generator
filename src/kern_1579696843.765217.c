#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(610, "random");

	for (int d = 3; d < 610; d++)
	  for (int c = 3; c < 610; c++)
	    for (int b = 3; b < 610; b++)
	      for (int a = 3; a < 610; a++)
	      {
	        
	       A[a]=A[a-2]/0.426;
	        
	       A[a]=0.798;
	      }

    return 0;
}