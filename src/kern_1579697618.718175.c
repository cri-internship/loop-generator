#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(50, "random");
	double **B = create_two_dim_double(920, 100, "random");
	double *C = create_one_dim_double(540, "random");

	for (int a = 1; a < 50; a++)
	{
	  
	    double var_a=A[a]/0.887;
	    A[a]=0.657;
	  
	    double var_b=B[a][a]+0.107;
	    double var_c=B[a-1][a-1]-0.303;
	}

    return 0;
}