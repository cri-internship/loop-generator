#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(710, "ones");
	double *A = create_one_dim_double(920, "ones");

	for (int a = 5; a < 709; a++)
	{
	  
	    B[a]=B[a+1]*0.423;
	  
	    double var_a=B[a]+0.387;
	    double var_b=B[a-5]/0.184;
	}

    return 0;
}