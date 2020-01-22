#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(50, "random");

	for (int a = 2; a < 50; a++)
	{
	  
	    A[a]=A[a-2]*0.937;
	}

    return 0;
}