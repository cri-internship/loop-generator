#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(340, "zeros");

	for (int d = 0; d < 335; d++)
	  for (int c = 0; c < 335; c++)
	    for (int b = 0; b < 335; b++)
	      for (int a = 0; a < 335; a++)
	      {
	        
	       double var_a=A[a]/0.394;
	       double var_b=A[a+5]+0.161;
	      }

    return 0;
}