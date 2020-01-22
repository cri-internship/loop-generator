#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(900, "ones");
	float *A = create_one_dim_float(390, "ones");

	for (int a = 3; a < 390; a++)
	{
	  
	    B[a]=0.327;
	    float  var_a=B[a]+0.452;
	  
	    B[a]=B[a-3]/0.131;
	  
	    A[a]=0.588;
	    A[a-2]=0.841;
	}

    return 0;
}