#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(510, 950, "ones");
	float **B = create_two_dim_float(170, 800, "ones");

	for (int b = 1; b < 800; b++)
	  for (int a = 3; a < 170; a++)
	  {
	    
	     B[a][b]=B[a-3][b-1]/0.962;
	  }

    return 0;
}