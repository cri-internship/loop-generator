#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 560, "ones");
	float ***C = create_three_dim_float(880, 40, 130, "ones");
	float *B = create_one_dim_float(420, "ones");

	for (int b = 4; b < 420; b++)
	  for (int a = 4; a < 420; a++)
	  {
	    
	     B[a]=B[a-4]/0.439;
	  }

    return 0;
}