#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(110, "ones");

	for (int a = 2; a < 107; a++)
	{
	  
	    A[a]=0.894;
	    A[a+3]=0.237;
	  
	    double var_a=A[a]*0.525;
	    double var_b=A[a-2]/0.031;
	}

    return 0;
}