#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(220, "ones");

	for (int c = 4; c < 220; c++)
	  for (int b = 4; b < 220; b++)
	    for (int a = 4; a < 220; a++)
	    {
	      
	      A[a]=0.981;
	      A[a-4]=0.369;
	    }

    return 0;
}