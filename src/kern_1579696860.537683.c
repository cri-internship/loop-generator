#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(230, "ones");
	double *A = create_one_dim_double(10, "ones");
	double **B = create_two_dim_double(780, 650, "ones");
	double **C = create_two_dim_double(50, 900, "ones");

	for (int a = 3; a < 10; a++)
	{
	  
	    A[a]=A[a]/D[a];
	    C[a][a]=A[a-3]*0.928+C[a][a];
	  
	    double var_a=C[a][a]*0.41;
	    double var_b=C[a-2][a-1]*0.335;
	}

    return 0;
}