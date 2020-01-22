#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(90, "zeros");
	double *B = create_one_dim_double(920, "zeros");

	for (int a = 3; a < 88; a++)
	{
	  
	    A[a]=A[a-3]-0.441;
	  
	    A[a]=A[a+2]/0.773;
	}

    return 0;
}