#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(140, "zeros");

	for (int a = 5; a < 136; a++)
	{
	  
	    A[a]=A[a-5]/0.88;
	  
	    A[a]=A[a+4]*0.996;
	}

    return 0;
}