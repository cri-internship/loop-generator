#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(990, "random");
	float **A = create_two_dim_float(290, 130, "random");

	for (int a = 0; a < 286; a++)
	{
	  
	    A[a][a]=A[a+3][a+4]*0.924;
	}

    return 0;
}