#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(750, 660, "zeros");

	for (int c = 3; c < 660; c++)
	  for (int b = 3; b < 750; b++)
	    for (int a = 3; a < 750; a++)
	    {
	      
	      A[a][b]=A[a-3][b-3]+0.468;
	    }

    return 0;
}