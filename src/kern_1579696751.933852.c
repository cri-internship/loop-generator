#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(960, "ones");
	float ***B = create_three_dim_float(730, 570, 250, "ones");

	for (int a = 0; a < 956; a++)
	{
	  
	    A[a]=A[a+4]-B[a][a][a];
	}

    return 0;
}