#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(250, 440, "zeros");
	double *A = create_one_dim_double(890, "zeros");
	double *C = create_one_dim_double(560, "zeros");

	for (int d = 5; d < 440; d++)
	  for (int c = 4; c < 250; c++)
	    for (int b = 4; b < 250; b++)
	      for (int a = 4; a < 250; a++)
	      {
	        
	       B[a][b]=B[a-2][b-5]/0.824;
	        
	       C[a]=A[a];
	       C[a-4]=B[a][b];
	      }

    return 0;
}