#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(270, 930, "zeros");
	double *E = create_one_dim_double(140, "zeros");
	double ***C = create_three_dim_double(530, 890, 880, "zeros");
	double *B = create_one_dim_double(860, "zeros");
	double *A = create_one_dim_double(980, "zeros");

	for (int d = 0; d < 976; d++)
	  for (int c = 0; c < 976; c++)
	    for (int b = 0; b < 976; b++)
	      for (int a = 0; a < 976; a++)
	      {
	        
	       A[a]=0.717;
	       A[a+4]=0.885;
	      }

    return 0;
}