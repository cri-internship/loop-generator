#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(280, "zeros");

	for (int a = 0; a < 276; a++)
	{
	  
	    A[a]=A[a+4]+0.954;
	  
	    float var_a=A[a]*0.541;
	    float var_b=A[a+2]/0.72;
	}

    return 0;
}