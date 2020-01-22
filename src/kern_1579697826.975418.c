#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(270, "ones");
	double *A = create_one_dim_double(950, "ones");

	for (int a = 3; a < 270; a++)
	{
	  
	    B[a]=B[a-3]*A[a];
	  
	    A[a]=B[a];
	    A[a]=B[a];
	  
	    double var_a=A[a]+0.252;
	    double var_b=A[a+1]/0.893;
	}

    return 0;
}