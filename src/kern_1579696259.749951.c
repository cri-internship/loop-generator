#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(570, 680, "zeros");
	double *A = create_one_dim_double(1000, "zeros");

	for (int d = 0; d < 678; d++)
	  for (int c = 4; c < 570; c++)
	    for (int b = 4; b < 570; b++)
	      for (int a = 4; a < 570; a++)
	      {
	        
	       double var_a=A[a]*0.666;
	       double var_b=A[a-4]/0.745;
	        
	       double var_c=B[a][b]-0.591;
	       double var_d=B[a][b+2]-0.444;
	      }

    return 0;
}