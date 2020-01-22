#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(910, 510, "zeros");
	double ***B = create_three_dim_double(360, 450, 310, "zeros");

	for (int b = 0; b < 450; b++)
	  for (int a = 0; a < 356; a++)
	  {
	    
	     double var_a=B[a][b][a]+0.796;
	     double var_b=B[a+4][b][a+2]*0.041;
	  }

    return 0;
}