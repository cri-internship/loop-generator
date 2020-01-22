#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(790, "zeros");
	double **C = create_two_dim_double(200, 90, "zeros");
	double *B = create_one_dim_double(130, "zeros");
	double **A = create_two_dim_double(230, 400, "zeros");

	for (int a = 5; a < 130; a++)
	{
	  
	    D[a]=D[a-5]/0.729;
	  
	    A[a][a]=A[a][a-1]+C[a][a];
	  
	    D[a]=D[a-3]*0.669;
	  
	    A[a][a]=A[a-4][a-4]+0.528;
	  
	    B[a]=B[a-5]*0.101;
	  
	    C[a][a]=0.359;
	    C[a-1][a]=0.3;
	  
	    A[a][a]=A[a][a]+B[a]*D[a];
	    D[a]=A[a-2][a-1]/B[a];
	}

    return 0;
}