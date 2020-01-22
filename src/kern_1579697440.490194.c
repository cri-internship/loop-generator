#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(380, "ones");
	float *A = create_one_dim_float(970, "ones");

	for (int a = 1; a < 375; a++)
	{
	  
	    B[a]=B[a-1]*0.293;
	  
	    B[a]=B[a+1]*A[a];
	  
	    A[a]=A[a+1]+0.479;
	  
	    B[a]=B[a+3]/A[a];
	  
	    A[a]=B[a]+A[a];
	}

    return 0;
}