#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(320, "random");
	double **B = create_two_dim_double(960, 100, "random");

	for (int d = 0; d < 315; d++)
	  for (int c = 0; c < 315; c++)
	    for (int b = 0; b < 315; b++)
	      for (int a = 0; a < 315; a++)
	      {
	        
	       A[a]=B[a][b];
	       A[a+5]=B[a][b];
	        
	       double var_a=A[a]+0.801;
	       double var_b=A[a+3]*0.337;
	      }

    return 0;
}