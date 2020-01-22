#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(120, "random");
	float *B = create_one_dim_float(800, "random");
	float *A = create_one_dim_float(340, "random");

	for (int a = 5; a < 116; a++)
	{
	  
	    A[a]=A[a-5]/C[a]*B[a];
	  
	    C[a]=C[a-2]-0.308;
	  
	    C[a]=C[a-1]/A[a];
	  
	    A[a]=A[a+5]-0.879;
	  
	    A[a]=C[a]*A[a]-B[a];
	    B[a]=C[a+4]-B[a];
	}

    return 0;
}