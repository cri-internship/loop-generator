#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(690, "random");
	float **B = create_two_dim_float(560, 110, "random");
	float **A = create_two_dim_float(670, 960, "random");

	for (int a = 5; a < 556; a++)
	{
	  
	    C[a]=C[a-2]-0.596;
	  
	    A[a][a]=A[a-4][a-5]/0.304;
	  
	    B[a][a]=B[a+4][a+2]-A[a][a]*0.849;
	  
	    float var_a=C[a]+0.442;
	}

    return 0;
}