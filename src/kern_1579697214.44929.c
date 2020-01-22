#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(270, 110, "zeros");
	double *A = create_one_dim_double(950, "zeros");

	for (int d = 0; d < 107; d++)
	  for (int c = 1; c < 269; c++)
	    for (int b = 1; b < 269; b++)
	      for (int a = 1; a < 269; a++)
	      {
	        
	       A[a]=B[a][b];
	       A[a]=A[a]-0.113;
	        
	       A[a]=A[a-1]+0.172;
	        
	       double var_a=B[a][b]*0.818;
	       double var_b=B[a+1][b+3]/0.766;
	      }

    return 0;
}