#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(120, "random");
	float **B = create_two_dim_float(600, 710, "random");

	for (int a = 2; a < 119; a++)
	{
	  
	    A[a]=A[a-2]/0.877;
	  
	    A[a]=A[a+1]+B[a][a];
	}

    return 0;
}