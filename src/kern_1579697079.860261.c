#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(700, 880, "zeros");
	double *B = create_one_dim_double(790, "zeros");

	for (int a = 5; a < 700; a++)
	{
	  
	    A[a][a]=A[a-2][a-5]/0.436;
	}

    return 0;
}