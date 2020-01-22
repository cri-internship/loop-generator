#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(650, 380, "random");
	double *B = create_one_dim_double(980, "random");

	for (int d = 0; d < 376; d++)
	  for (int c = 0; c < 648; c++)
	    for (int b = 0; b < 648; b++)
	      for (int a = 0; a < 648; a++)
	      {
	        
	       A[a][b]=0.892;
	       A[a][b]=0.667;
	        
	       double var_a=A[a][b]/0.075;
	       double var_b=A[a+2][b+4]-0.144;
	      }

    return 0;
}