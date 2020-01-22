#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(590, 60, "zeros");
	double *B = create_one_dim_double(40, "zeros");

	for (int d = 4; d < 35; d++)
	  for (int c = 4; c < 35; c++)
	    for (int b = 4; b < 35; b++)
	      for (int a = 4; a < 35; a++)
	      {
	        
	       B[a]=B[a-4]/A[a][b];
	        
	       B[a]=B[a+5]+0.479;
	      }

    return 0;
}