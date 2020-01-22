#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(860, 960, "ones");

	for (int a = 4; a < 860; a++)
	{
	  
	    A[a][a]=0.33;
	    A[a-3][a-4]=0.404;
	}

    return 0;
}