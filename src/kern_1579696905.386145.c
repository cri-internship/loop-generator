#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(650, "ones");
	float *C = create_one_dim_float(410, "ones");
	float *B = create_one_dim_float(470, "ones");

	for (int a = 3; a < 410; a++)
	{
	  
	    B[a]=B[a-3]/A[a];
	  
	    C[a]=0.305;
	    C[a]=0.319;
	  
	    C[a]=A[a]-B[a]/C[a];
	    B[a]=A[a-3]-C[a]/B[a];
	}

    return 0;
}