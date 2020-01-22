#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(650, "ones");
	float *B = create_one_dim_float(860, "ones");
	float *D = create_one_dim_float(900, "ones");
	float **E = create_two_dim_float(400, 300, "ones");
	float *A = create_one_dim_float(230, "ones");

	for (int a = 0; a < 396; a++)
	{
	  
	    E[a][a]=E[a+4][a+4]+0.301;
	}

    return 0;
}