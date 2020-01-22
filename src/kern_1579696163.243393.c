#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(900, 290, "ones");
	float *C = create_one_dim_float(330, "ones");
	float **A = create_two_dim_float(500, 220, "ones");

	for (int a = 4; a < 495; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]/0.244;
	  
	    A[a][a]=A[a+3][a+5]/0.002;
	}

    return 0;
}