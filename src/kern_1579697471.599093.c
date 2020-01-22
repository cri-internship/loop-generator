#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(290, "zeros");
	double *C = create_one_dim_double(330, "zeros");
	double *A = create_one_dim_double(510, "zeros");

	for (int d = 4; d < 326; d++)
	  for (int c = 4; c < 326; c++)
	    for (int b = 4; b < 326; b++)
	      for (int a = 4; a < 326; a++)
	      {
	        
	       A[a]=A[a-4]/0.768;
	        
	       A[a]=C[a]-B[a]+A[a];
	       C[a]=C[a+4]*B[a]-A[a];
	      }

    return 0;
}