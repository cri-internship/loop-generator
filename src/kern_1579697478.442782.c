#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(960, 870, "ones");
	float **C = create_two_dim_float(1000, 900, "ones");
	float **B = create_two_dim_float(880, 650, "ones");
	float *A = create_one_dim_float(770, "ones");

	for (int a = 4; a < 770; a++)
	{
	  
	    A[a]=A[a-2]/0.853;
	  
	    C[a][a]=C[a-4][a-1]/0.983;
	  
	    C[a][a]=B[a][a]/A[a]*D[a][a]+C[a][a];
	    D[a][a]=B[a+2][a]*C[a][a]/A[a];
	}

    return 0;
}