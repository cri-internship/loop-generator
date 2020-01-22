#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "zeros");

	for (int a = 3; a < 855; a++)
	{
	  
	    A[a]=A[a-2]+0.43;
	  
	    A[a]=A[a-3]*0.979;
	  
	    A[a]=A[a+2]+0.412;
	  
	    A[a]=A[a+5]*0.898;
	}

    return 0;
}