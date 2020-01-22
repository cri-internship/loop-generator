#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(50, 900, "ones");
	float ***D = create_three_dim_float(870, 470, 180, "ones");
	float *C = create_one_dim_float(480, "ones");
	float *B = create_one_dim_float(660, "ones");

	for (int a = 0; a < 476; a++)
	{
	  
	    C[a]=C[a+4]+0.762;
	}

    return 0;
}