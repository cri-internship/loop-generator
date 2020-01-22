#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(560, "ones");
	double **C = create_two_dim_double(970, 270, "ones");
	double *A = create_one_dim_double(750, "ones");
	double **D = create_two_dim_double(250, 130, "ones");

	for (int a = 4; a < 560; a++)
	{
	  
	    A[a]=A[a-4]-B[a]*D[a][a];
	  
	    B[a]=B[a-1]-0.866;
	  
	    A[a]=A[a+3]/0.064;
	  
	    A[a]=A[a+1]*0.354;
	  
	    double var_a=B[a]+0.968;
	    double var_b=B[a-4]+0.207;
	  
	    B[a]=A[a]+0.127/B[a];
	}

    return 0;
}