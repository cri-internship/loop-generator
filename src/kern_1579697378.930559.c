#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(310, "ones");
	double *A = create_one_dim_double(200, "ones");

	for (int a = 3; a < 200; a++)
	{
	  
	    A[a]=A[a-1]+0.892;
	  
	    float  var_a=A[a]+0.962;
	  
	    B[a]=B[a-3]/0.136;
	  
	    A[a]=A[a-3]/0.395;
	  
	    B[a]=0.284;
	}

    return 0;
}