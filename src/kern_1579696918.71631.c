#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(60, 310, "ones");
	float *B = create_one_dim_float(860, "ones");

	for (int a = 5; a < 57; a++)
	{
	  
	    B[a]=B[a-5]-A[a][a];
	  
	    A[a][a]=A[a+3][a+3]*B[a];
	}

    return 0;
}