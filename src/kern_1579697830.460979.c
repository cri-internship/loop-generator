#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(280, "ones");
	double **B = create_two_dim_double(490, 890, "ones");

	for (int a = 4; a < 276; a++)
	{
	  
	    A[a]=A[a-4]+0.911;
	  
	    A[a]=A[a+4]-0.505;
	  
	    B[a][a]=A[a];
	    B[a+3][a+2]=A[a];
	  
	    double var_a=B[a][a]*0.054;
	    double var_b=B[a][a+4]+0.84;
	}

    return 0;
}