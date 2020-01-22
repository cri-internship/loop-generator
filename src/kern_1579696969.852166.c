#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(430, 110, 440, "zeros");
	float ***B = create_three_dim_float(780, 950, 930, "zeros");
	float *A = create_one_dim_float(880, "zeros");

	for (int a = 0; a < 875; a++)
	{
	  
	    A[a]=A[a+5]-0.873;
	}

    return 0;
}