#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(150, "zeros");
	double **B = create_two_dim_double(500, 50, "zeros");
	double **A = create_two_dim_double(540, 50, "zeros");
	double **C = create_two_dim_double(940, 920, "zeros");

	for (int d = 2; d < 50; d++)
	  for (int c = 5; c < 540; c++)
	    for (int b = 5; b < 540; b++)
	      for (int a = 5; a < 540; a++)
	      {
	        
	       D[a]=A[a][b]-D[a]/C[a][b]+B[a][b];
	       A[a][b]=A[a-5][b-2]*D[a]/C[a][b];
	      }

    return 0;
}