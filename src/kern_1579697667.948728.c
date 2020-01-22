#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(50, "zeros");
	float **A = create_two_dim_float(430, 120, "zeros");
	float *B = create_one_dim_float(300, "zeros");

	for (int a = 0; a < 46; a++)
	{
	  
	    C[a]=C[a+4]+0.872;
	}

    return 0;
}