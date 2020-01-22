#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(880, 560, "ones");
	double ***D = create_three_dim_double(300, 150, 650, "ones");
	double **A = create_two_dim_double(380, 110, "ones");
	double *C = create_one_dim_double(640, "ones");

	for (int c = 1; c < 640; c++)
	  for (int b = 1; b < 640; b++)
	    for (int a = 1; a < 640; a++)
	    {
	      
	      double var_a=C[a]+0.132;
	      double var_b=C[a-1]/0.421;
	    }

    return 0;
}