#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(410, "random");
	float **D = create_two_dim_float(270, 320, "random");
	float *A = create_one_dim_float(760, "random");
	float *C = create_one_dim_float(320, "random");

	for (int a = 0; a < 265; a++)
	{
	  
	    D[a][a]=D[a][a+5]/B[a];
	}

    return 0;
}