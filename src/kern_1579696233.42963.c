#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(250, "random");
	double *B = create_one_dim_double(430, "random");

	for (int d = 0; d < 245; d++)
	  for (int c = 0; c < 245; c++)
	    for (int b = 0; b < 245; b++)
	      for (int a = 0; a < 245; a++)
	      {
	        
	       double var_a=A[a]*0.826;
	       double var_b=A[a+5]/0.605;
	      }

    return 0;
}