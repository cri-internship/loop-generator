#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(590, 620, "ones");

	for (int a = 0; a < 587; a++)
	{
	  
	    A[a][a]=A[a+2][a+3]/0.977;
	}

    return 0;
}