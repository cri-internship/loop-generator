#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(100, "ones");
	double *A = create_one_dim_double(430, "ones");

	for (int a = 3; a < 428; a++)
	{
	  
	    A[a]=A[a-3]-0.397;
	  
	    A[a]=A[a+2]/0.843;
	}

    return 0;
}