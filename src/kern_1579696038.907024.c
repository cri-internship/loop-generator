#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(830, "random");
	float *A = create_one_dim_float(840, "random");
	float *C = create_one_dim_float(970, "random");

	for (int a = 0; a < 835; a++)
	{
	  
	    C[a]=C[a+1]/0.083;
	  
	    A[a]=0.769;
	    A[a+5]=0.045;
	}

    return 0;
}