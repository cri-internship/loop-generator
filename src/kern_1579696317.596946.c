#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(820, "random");
	float **B = create_two_dim_float(270, 30, "random");
	float *A = create_one_dim_float(60, "random");

	for (int a = 3; a < 820; a++)
	{
	  
	    C[a]=0.891;
	    C[a-3]=0.64;
	}

    return 0;
}