#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(140, "zeros");
	float *B = create_one_dim_float(570, "zeros");
	float *C = create_one_dim_float(480, "zeros");

	for (int a = 4; a < 138; a++)
	{
	  
	    C[a]=C[a-1]+0.498;
	  
	    C[a]=C[a-4]/0.746;
	  
	    A[a]=A[a+2]-B[a]/C[a];
	  
	    A[a]=0.133;
	}

    return 0;
}