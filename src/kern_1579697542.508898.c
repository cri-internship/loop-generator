#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(500, "random");

	for (int a = 0; a < 497; a++)
	{
	  
	    A[a]=0.918;
	    A[a+3]=0.385;
	}

    return 0;
}