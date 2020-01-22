#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(20, "ones");
	double **A = create_two_dim_double(360, 130, "ones");

	for (int a = 5; a < 355; a++)
	{
	  
	    A[a][a]=0.804;
	    A[a-5][a-5]=0.111;
	  
	    double var_a=A[a][a]-0.605;
	    double var_b=A[a+5][a+4]+0.315;
	}

    return 0;
}