#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(470, "ones");
	float *A = create_one_dim_float(800, "ones");
	float *C = create_one_dim_float(290, "ones");

	for (int a = 2; a < 290; a++)
	{
	  
	    C[a]=C[a-1]/A[a]-B[a];
	  
	    B[a]=B[a-2]+0.753;
	}

    return 0;
}