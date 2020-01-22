#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(920, 150, "zeros");
	double *A = create_one_dim_double(300, "zeros");
	double **B = create_two_dim_double(590, 180, "zeros");

	for (int d = 0; d < 296; d++)
	  for (int c = 0; c < 296; c++)
	    for (int b = 0; b < 296; b++)
	      for (int a = 0; a < 296; a++)
	      {
	        
	       A[a]=A[a+4]+C[a][b]-B[a][b];
	      }

    return 0;
}