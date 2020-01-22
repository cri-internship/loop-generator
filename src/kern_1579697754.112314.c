#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(560, "random");

	for (int a = 3; a < 560; a++)
	{
	  
	    A[a]=A[a-3]/0.48;
	}

    return 0;
}