#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(210, 450, "zeros");
	double **A = create_two_dim_double(380, 290, "zeros");

	for (int d = 0; d < 290; d++)
	  for (int c = 5; c < 208; c++)
	    for (int b = 5; b < 208; b++)
	      for (int a = 5; a < 208; a++)
	      {
	        
	       A[a][b]=0.446;
	       A[a-5][b]=0.557;
	        
	       double var_a=B[a][b]+0.541;
	       double var_b=B[a+2][b+4]*0.396;
	      }

    return 0;
}