#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(950, 710, "ones");
	float **A = create_two_dim_float(730, 940, "ones");

	for (int a = 4; a < 730; a++)
	{
	  
	    B[a][a]=B[a+4][a+2]/A[a][a];
	  
	    A[a][a]=A[a][a]*B[a][a];
	    B[a][a]=A[a-4][a]+B[a][a];
	}

    return 0;
}