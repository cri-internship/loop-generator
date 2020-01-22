#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(310, "random");
	float **A = create_two_dim_float(660, 560, "random");

	for (int a = 1; a < 660; a++)
	{
	  
	    A[a][a]=A[a][a]+B[a];
	    B[a]=A[a-1][a]/B[a];
	}

    return 0;
}