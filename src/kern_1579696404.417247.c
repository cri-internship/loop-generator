#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(730, 410, "ones");
	double *B = create_one_dim_double(440, "ones");

	for (int c = 3; c < 438; c++)
	  for (int b = 3; b < 438; b++)
	    for (int a = 3; a < 438; a++)
	    {
	      
	      B[a]=B[a-3]-A[a][b];
	      
	      B[a]=B[a-1]-0.02;
	      
	      double var_a=B[a]/0.145;
	    }

    return 0;
}