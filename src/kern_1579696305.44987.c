#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(550, "ones");
	double **B = create_two_dim_double(700, 930, "ones");

	for (int d = 0; d < 926; d++)
	  for (int c = 2; c < 548; c++)
	    for (int b = 2; b < 548; b++)
	      for (int a = 2; a < 548; a++)
	      {
	        
	       B[a][b]=B[a-2][b]/A[a];
	        
	       B[a][b]=B[a+1][b+2]+0.418;
	        
	       B[a][b]=B[a+4][b+4]/0.812;
	        
	       double var_a=A[a]*0.381;
	       double var_b=A[a+2]+0.006;
	      }

    return 0;
}