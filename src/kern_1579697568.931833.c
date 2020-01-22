#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(410, 470, "ones");

	for (int a = 5; a < 410; a++)
	{
	  
	    A[a][a]=A[a-5][a-3]+0.518;
	}

    return 0;
}