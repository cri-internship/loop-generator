#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(620, "ones");
	float **C = create_two_dim_float(440, 290, "ones");
	float *B = create_one_dim_float(290, "ones");

	for (int a = 3; a < 440; a++)
	{
	  
	    C[a][a]=C[a][a-3]+A[a]/B[a];
	}

    return 0;
}