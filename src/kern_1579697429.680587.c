#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(250, 700, "random");
	double ***B = create_three_dim_double(770, 180, 10, "random");

	for (int b = 1; b < 700; b++)
	  for (int a = 5; a < 250; a++)
	  {
	    
	     double var_a=A[a][b]*0.053;
	     double var_b=A[a-5][b-1]/0.809;
	  }

    return 0;
}