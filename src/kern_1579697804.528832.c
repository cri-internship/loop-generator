#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(90, "random");
	float *B = create_one_dim_float(80, "random");
	float *A = create_one_dim_float(560, "random");

	for (int a = 1; a < 560; a++)
	{
	  
	    A[a]=0.505;
	    A[a-1]=0.495;
	}

    return 0;
}