#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(330, 960, "ones");
	double **B = create_two_dim_double(190, 290, "ones");

	for (int d = 4; d < 286; d++)
	  for (int c = 5; c < 187; c++)
	    for (int b = 5; b < 187; b++)
	      for (int a = 5; a < 187; a++)
	      {
	        
	       A[a][b]=A[a-5][b]-0.899;
	        
	       B[a][b]=B[a+3][b+4]+A[a][b];
	        
	       B[a][b]=A[a][b];
	        
	       double var_a=B[a][b]/0.898;
	       double var_b=B[a-3][b-4]+0.246;
	      }

    return 0;
}