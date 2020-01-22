#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(630, "random");
	double *A = create_one_dim_double(240, "random");

	for (int d = 0; d < 239; d++)
	  for (int c = 0; c < 239; c++)
	    for (int b = 0; b < 239; b++)
	      for (int a = 0; a < 239; a++)
	      {
	        
	       A[a]=A[a+1]+0.094;
	        
	       double var_a=B[a]-0.815;
	       double var_b=B[a+3]-0.142;
	      }

    return 0;
}