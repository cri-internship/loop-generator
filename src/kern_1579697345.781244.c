#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(720, 380, "ones");
	double *C = create_one_dim_double(830, "ones");
	double *B = create_one_dim_double(790, "ones");

	for (int a = 0; a < 716; a++)
	{
	  
	    A[a][a]=A[a+4][a+1]+0.851;
	}

    return 0;
}