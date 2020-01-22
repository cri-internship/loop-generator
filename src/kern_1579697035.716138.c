#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(860, "ones");
	float *B = create_one_dim_float(280, "ones");

	for (int a = 0; a < 858; a++)
	{
	  
	    B[a]=A[a]/B[a];
	    A[a]=A[a+2]-B[a];
	}

    return 0;
}