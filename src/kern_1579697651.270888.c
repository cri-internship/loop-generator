#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(90, 990, "random");

	for (int a = 4; a < 90; a++)
	{
	  
	    A[a][a]=0.977;
	    A[a-4][a-3]=0.379;
	}

    return 0;
}