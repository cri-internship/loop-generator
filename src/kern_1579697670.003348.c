#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(230, "ones");
	float *C = create_one_dim_float(800, "ones");
	float *B = create_one_dim_float(330, "ones");

	for (int a = 4; a < 230; a++)
	{
	  
	    B[a]=B[a-4]/0.086;
	  
	    A[a]=A[a-1]+B[a];
	  
	    C[a]=C[a+2]+0.004;
	  
	    A[a]=0.085;
	  
	    B[a]=C[a]-A[a]+0.548;
	    C[a]=C[a+5]*B[a]-A[a];
	}

    return 0;
}