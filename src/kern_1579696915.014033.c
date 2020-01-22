#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(1000, 790, 250, "ones");
	double **B = create_two_dim_double(20, 480, "ones");
	double *E = create_one_dim_double(710, "ones");
	double *A = create_one_dim_double(610, "ones");
	double *C = create_one_dim_double(550, "ones");

	for (int d = 0; d < 609; d++)
	  for (int c = 0; c < 609; c++)
	    for (int b = 0; b < 609; b++)
	      for (int a = 0; a < 609; a++)
	      {
	        
	       A[a]=A[a+1]/0.005;
	      }

    return 0;
}