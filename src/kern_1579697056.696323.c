#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(780, "ones");
	float ***B = create_three_dim_float(550, 460, 780, "ones");
	float **A = create_two_dim_float(180, 220, "ones");

	for (int a = 3; a < 180; a++)
	{
	  
	    A[a][a]=A[a-2][a-3]/C[a];
	}

    return 0;
}