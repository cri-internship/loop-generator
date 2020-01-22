#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(180, "ones");
	double *B = create_one_dim_double(660, "ones");

	for (int a = 4; a < 177; a++)
	{
	  
	    A[a]=A[a-1]/B[a];
	  
	    A[a]=A[a-4]*B[a];
	  
	    A[a]=A[a+1]/0.965;
	  
	    B[a]=B[a+4]+A[a];
	}

    return 0;
}