#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(220, "ones");
	double **C = create_two_dim_double(290, 110, "ones");
	double *E = create_one_dim_double(200, "ones");
	double *A = create_one_dim_double(310, "ones");
	double ***D = create_three_dim_double(130, 790, 100, "ones");

	for (int d = 1; d < 200; d++)
	  for (int c = 1; c < 200; c++)
	    for (int b = 1; b < 200; b++)
	      for (int a = 1; a < 200; a++)
	      {
	        
	       B[a]=B[a-1]+A[a];
	        
	       E[a]=B[a]/C[a][b]-D[a][b][c];
	       E[a]=0.867*C[a][b]/D[a][b][c]-B[a];
	      }

    return 0;
}