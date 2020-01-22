#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(150, 490, "ones");
	float **C = create_two_dim_float(150, 570, "ones");
	float **A = create_two_dim_float(450, 430, "ones");

	for (int a = 3; a < 450; a++)
	{
	  
	    A[a][a]=A[a][a-3]/0.258;
	}

    return 0;
}