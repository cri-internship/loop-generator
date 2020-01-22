#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(670, "random");

	for (int b = 4; b < 670; b++)
	  for (int a = 4; a < 670; a++)
	  {
	    
	     A[a]=0.534;
	     A[a-4]=0.932;
	  }

    return 0;
}