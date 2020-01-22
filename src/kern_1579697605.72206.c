#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(270, "zeros");
	double *A = create_one_dim_double(940, "zeros");
	double *B = create_one_dim_double(870, "zeros");

	for (int d = 2; d < 266; d++)
	  for (int c = 2; c < 266; c++)
	    for (int b = 2; b < 266; b++)
	      for (int a = 2; a < 266; a++)
	      {
	        
	       A[a]=A[a-2]-C[a];
	        
	       C[a]=C[a+4]*0.079;
	      }

    return 0;
}