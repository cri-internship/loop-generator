#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(660, 690, "ones");
	double *A = create_one_dim_double(540, "ones");

	for (int a = 5; a < 540; a++)
	{
	  
	    B[a][a]=B[a-5][a-2]*0.243;
	  
	    A[a]=A[a-1]/0.684;
	  
	    B[a][a]=0.187;
	  
	    double var_a=B[a][a]*0.378;
	    double var_b=B[a+1][a]*0.501;
	}

    return 0;
}