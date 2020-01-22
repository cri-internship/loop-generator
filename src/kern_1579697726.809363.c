#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(710, "ones");

	for (int a = 5; a < 708; a++)
	{
	  
	    A[a]=A[a-3]*0.403;
	  
	    A[a]=A[a-5]/0.351;
	  
	    A[a]=A[a+1]-0.328;
	}

    return 0;
}