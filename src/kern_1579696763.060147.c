#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(390, "zeros");
	double **A = create_two_dim_double(70, 120, "zeros");

	for (int a = 2; a < 70; a++)
	{
	  
	    A[a][a]=A[a-1][a-2]/0.777;
	  
	    A[a][a]=0.761;
	}

    return 0;
}