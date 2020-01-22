#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(680, "ones");
	float *A = create_one_dim_float(350, "ones");

	for (int a = 4; a < 348; a++)
	{
	  
	    A[a]=0.002;
	    float  var_a=A[a]/0.218;
	  
	    A[a]=A[a-4]+B[a];
	  
	    B[a]=B[a+4]+0.244;
	  
	    B[a]=0.779;
	  
	    A[a]=A[a+2]-B[a];
	}

    return 0;
}