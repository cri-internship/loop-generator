#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(680, 790, "ones");
	double *B = create_one_dim_double(770, "ones");

	for (int a = 2; a < 680; a++)
	{
	  
	    A[a][a]=A[a-2][a-1]*0.659;
	}

    return 0;
}