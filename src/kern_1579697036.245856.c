#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(910, "random");

	for (int a = 1; a < 910; a++)
	{
	  
	    A[a]=A[a-1]*0.89;
	}

    return 0;
}