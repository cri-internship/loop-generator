#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(310, "ones");
	double *A = create_one_dim_double(670, "ones");
	double **C = create_two_dim_double(930, 970, "ones");

	for (int d = 1; d < 967; d++)
	  for (int c = 4; c < 310; c++)
	    for (int b = 4; b < 310; b++)
	      for (int a = 4; a < 310; a++)
	      {
	        
	       A[a]=A[a-4]-B[a];
	        
	       B[a]=B[a-4]-0.088;
	        
	       C[a][b]=A[a];
	       C[a-2][b-1]=A[a];
	        
	       B[a]=0.148*C[a][b];
	        
	       C[a][b]=B[a]-A[a];
	        
	       double var_a=B[a]+0.004;
	      }

    return 0;
}