#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(510, "zeros");
	float **B = create_two_dim_float(370, 910, "zeros");
	float **C = create_two_dim_float(590, 990, "zeros");

	for (int a = 0; a < 505; a++)
	{
	  
	    A[a]=A[a+5]/0.627;
	}

    return 0;
}