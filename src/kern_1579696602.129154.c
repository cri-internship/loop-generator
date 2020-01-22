#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(560, "ones");
	float ***A = create_three_dim_float(650, 660, 710, "ones");

	for (int a = 0; a < 645; a++)
	{
	  
	    A[a][a][a]=B[a];
	    A[a+5][a+4][a]=B[a];
	}

    return 0;
}