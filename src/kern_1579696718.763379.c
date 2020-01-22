#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(230, "ones");
	double *C = create_one_dim_double(800, "ones");
	double *D = create_one_dim_double(30, "ones");
	double *A = create_one_dim_double(800, "ones");

	for (int d = 5; d < 30; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       D[a]=B[a];
	       D[a-5]=A[a];
	      }

    return 0;
}