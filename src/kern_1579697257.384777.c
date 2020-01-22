#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(490, "ones");
	double **A = create_two_dim_double(480, 990, "ones");
	double *C = create_one_dim_double(860, "ones");

	for (int a = 0; a < 488; a++)
	{
	  
	    B[a]=B[a+2]*0.851;
	}

    return 0;
}