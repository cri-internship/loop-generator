#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(580, "ones");
	float *C = create_one_dim_float(560, "ones");
	float *B = create_one_dim_float(670, "ones");

	for (int a = 5; a < 556; a++)
	{
	  
	    C[a]=C[a-1]/A[a];
	  
	    C[a]=A[a]-B[a];
	    A[a]=C[a]+0.465;
	  
	    B[a]=B[a+2]/A[a]-0.265;
	  
	    B[a]=0.77;
	  
	    A[a]=C[a];
	  
	    B[a]=C[a]-A[a];
	    A[a]=C[a+4]*0.581;
	}

    return 0;
}