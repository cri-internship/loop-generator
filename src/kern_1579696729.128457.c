#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(40, "zeros");
	double *D = create_one_dim_double(850, "zeros");
	double **B = create_two_dim_double(800, 310, "zeros");
	double *C = create_one_dim_double(130, "zeros");

	for (int d = 5; d < 40; d++)
	  for (int c = 5; c < 40; c++)
	    for (int b = 5; b < 40; b++)
	      for (int a = 5; a < 40; a++)
	      {
	        
	       A[a]=A[a-5]+0.518;
	      }

    return 0;
}