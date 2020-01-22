#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(440, 620, "zeros");

	for (int c = 0; c < 620; c++)
	  for (int b = 2; b < 440; b++)
	    for (int a = 2; a < 440; a++)
	    {
	      
	      A[a][b]=A[a-2][b]/0.881;
	    }

    return 0;
}