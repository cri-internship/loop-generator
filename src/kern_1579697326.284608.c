#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(430, "ones");
	float *C = create_one_dim_float(310, "ones");
	float *B = create_one_dim_float(650, "ones");

	for (int a = 4; a < 309; a++)
	{
	  
	    A[a]=A[a+2]-C[a];
	  
	    A[a]=C[a]+B[a];
	    C[a]=C[a+1]+A[a]*A[a];
	  
	    B[a]=A[a]*B[a]+0.332;
	    B[a]=A[a-4]+C[a]*B[a];
	}

    return 0;
}