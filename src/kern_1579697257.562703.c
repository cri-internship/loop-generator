#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(70, "random");
	float *A = create_one_dim_float(260, "random");
	float *C = create_one_dim_float(430, "random");

	for (int a = 2; a < 69; a++)
	{
	  
	    B[a]=B[a+1]*C[a];
	  
	    C[a]=B[a];
	    C[a-2]=0.427;
	  
	    C[a]=A[a]+B[a];
	    B[a]=A[a+4]-C[a];
	}

    return 0;
}