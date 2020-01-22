#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(240, 310, "random");

	for (int b = 0; b < 306; b++)
	  for (int a = 0; a < 239; a++)
	  {
	    
	     float var_a=A[a][b]/0.363;
	     float var_b=A[a+1][b+4]-0.079;
	  }

    return 0;
}