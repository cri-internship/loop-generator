#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(750, "zeros");
	double *B = create_one_dim_double(890, "zeros");

	for (int d = 2; d < 749; d++)
	  for (int c = 2; c < 749; c++)
	    for (int b = 2; b < 749; b++)
	      for (int a = 2; a < 749; a++)
	      {
	        
	       A[a]=A[a-2]/0.246;
	        
	       B[a]=B[a+5]/0.736;
	        
	       A[a]=A[a+1]-B[a];
	        
	       B[a]=B[a]/A[a];
	       A[a]=B[a-1]/0.31;
	      }

    return 0;
}