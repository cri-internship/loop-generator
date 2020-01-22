#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(750, 580, "zeros");
	double *A = create_one_dim_double(670, "zeros");
	double **B = create_two_dim_double(20, 290, "zeros");

	for (int a = 3; a < 670; a++)
	{
	  
	    A[a]=0.665;
	    A[a-3]=C[a][a];
	}

    return 0;
}