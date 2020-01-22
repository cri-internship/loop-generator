#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(230, "zeros");
	double **B = create_two_dim_double(360, 280, "zeros");

	for (int d = 5; d < 280; d++)
	  for (int c = 1; c < 225; c++)
	    for (int b = 1; b < 225; b++)
	      for (int a = 1; a < 225; a++)
	      {
	        
	       B[a][b]=B[a-1][b-5]+0.519;
	        
	       A[a]=A[a+5]+B[a][b];
	        
	       B[a][b]=B[a][b]/A[a];
	       A[a]=B[a-1][b-2]-A[a];
	      }

    return 0;
}