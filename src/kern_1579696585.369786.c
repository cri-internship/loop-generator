#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(350, "zeros");
	double *A = create_one_dim_double(570, "zeros");

	for (int a = 5; a < 348; a++)
	{
	  
	    A[a]=A[a-3]-0.06;
	  
	    A[a]=A[a-4]*B[a];
	  
	    double var_a=B[a]*0.561;
	    double var_b=B[a+2]-0.08;
	}

    return 0;
}