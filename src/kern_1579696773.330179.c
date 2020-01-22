#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(310, "random");
	double ***A = create_three_dim_double(830, 410, 210, "random");

	for (int b = 3; b < 410; b++)
	  for (int a = 4; a < 830; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-3][a-4]-0.459;
	  }

    return 0;
}