#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(230, "ones");
	double **A = create_two_dim_double(900, 600, "ones");
	double *B = create_one_dim_double(10, "ones");

	for (int a = 0; a < 10; a++)
	{
	  
	    double var_a=B[a]+0.009;
	    B[a]=0.119;
	  
	    C[a]=C[a]-A[a][a]+B[a];
	    C[a]=0.016;
	}

    return 0;
}