#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(180, "ones");
	float **B = create_two_dim_float(210, 290, "ones");

	for (int a = 4; a < 180; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]*0.34;
	  
	    A[a]=A[a-4]/0.834;
	  
	    A[a]=B[a][a]+0.577;
	    B[a][a]=B[a+2][a+2]/0.515;
	}

    return 0;
}