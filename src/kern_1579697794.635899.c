#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 30, "ones");
	double *A = create_one_dim_double(900, "ones");

	for (int d = 2; d < 28; d++)
	  for (int c = 2; c < 235; c++)
	    for (int b = 2; b < 235; b++)
	      for (int a = 2; a < 235; a++)
	      {
	        
	       A[a]=A[a-2]/B[a][b];
	        
	       B[a][b]=B[a+5][b+2]-0.448;
	        
	       A[a]=0.349;
	        
	       B[a][b]=0.695;
	        
	       double var_a=B[a][b]/0.179;
	       double var_b=B[a-2][b-2]/0.221;
	      }

    return 0;
}