#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(550, 640, "ones");

	for (int a = 5; a < 550; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]/0.596;
	}

    return 0;
}