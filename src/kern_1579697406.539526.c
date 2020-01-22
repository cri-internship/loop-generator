#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(610, 990, "random");
	float **A = create_two_dim_float(890, 400, "random");
	float *C = create_one_dim_float(600, "random");

	for (int a = 0; a < 889; a++)
	{
	  
	    A[a][a]=A[a][a]-B[a][a];
	    C[a]=A[a+1][a]/C[a]+B[a][a];
	}

    return 0;
}