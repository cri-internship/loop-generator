#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(800, "ones");
	double *A = create_one_dim_double(750, "ones");

	for (int a = 4; a < 747; a++)
	{
	  
	    A[a]=A[a-3]*B[a];
	  
	    A[a]=A[a+3]*0.586;
	  
	    A[a]=0.311;
	  
	    A[a]=B[a]/A[a];
	    B[a]=B[a-2]/A[a];
	}

    return 0;
}