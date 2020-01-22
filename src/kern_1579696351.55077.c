#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(950, "ones");
	float *B = create_one_dim_float(710, "ones");
	float *C = create_one_dim_float(610, "ones");

	for (int a = 0; a < 606; a++)
	{
	  
	    C[a]=C[a+4]+0.659;
	  
	    A[a]=0.382;
	    A[a+1]=0.252;
	}

    return 0;
}