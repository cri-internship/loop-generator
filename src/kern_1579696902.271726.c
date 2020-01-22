#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(870, 350, "ones");
	double *B = create_one_dim_double(260, "ones");

	for (int a = 4; a < 257; a++)
	{
	  
	    A[a][a]=A[a-1][a-1]+B[a];
	  
	    A[a][a]=A[a+1][a+1]*0.974;
	  
	    double var_a=B[a]+0.652;
	    double var_b=B[a+3]+0.46;
	}

    return 0;
}