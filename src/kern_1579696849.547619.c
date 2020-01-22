#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(90, "random");
	float *A = create_one_dim_float(490, "random");

	for (int a = 5; a < 86; a++)
	{
	  
	    B[a]=B[a-5]/0.823;
	  
	    B[a]=B[a-2]+0.215;
	  
	    A[a]=A[a-3]+0.766;
	}

    return 0;
}