#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(880, 910, "random");

	for (int a = 0; a < 876; a++)
	{
	  
	    A[a][a]=A[a+4][a+3]-0.402;
	}

    return 0;
}