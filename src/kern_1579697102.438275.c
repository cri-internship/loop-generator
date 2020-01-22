#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(100, "random");
	float **B = create_two_dim_float(950, 800, "random");

	for (int a = 1; a < 97; a++)
	{
	  
	    B[a][a]=B[a][a-1]+0.643;
	  
	    A[a]=0.535;
	    A[a+3]=0.227;
	}

    return 0;
}