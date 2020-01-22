#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(400, "zeros");
	float **A = create_two_dim_float(980, 670, "zeros");
	float ***B = create_three_dim_float(990, 660, 100, "zeros");

	for (int a = 4; a < 980; a++)
	{
	  
	    A[a][a]=A[a-4][a-1]+C[a];
	}

    return 0;
}