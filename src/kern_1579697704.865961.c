#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(1000, 250, "random");
	double **A = create_two_dim_double(20, 800, "random");

	for (int c = 0; c < 798; c++)
	  for (int b = 0; b < 17; b++)
	    for (int a = 0; a < 17; a++)
	    {
	      
	      double var_a=A[a][b]/0.08;
	      double var_b=A[a+3][b+2]*0.603;
	    }

    return 0;
}