#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(10, 310, 640, "ones");
	double *A = create_one_dim_double(80, "ones");
	double ***B = create_three_dim_double(950, 810, 570, "ones");

	for (int b = 4; b < 310; b++)
	  for (int a = 4; a < 10; a++)
	  {
	    
	     double var_a=C[a][b][a]-0.312;
	     double var_b=C[a-4][b-4][a-4]*0.673;
	  }

    return 0;
}