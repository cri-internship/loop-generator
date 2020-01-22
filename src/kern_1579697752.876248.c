#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(110, 860, 100, "ones");
	float *A = create_one_dim_float(530, "ones");
	float ***C = create_three_dim_float(930, 310, 270, "ones");
	float ***D = create_three_dim_float(310, 130, 810, "ones");
	float **B = create_two_dim_float(100, 910, "ones");

	for (int a = 5; a < 100; a++)
	{
	  
	    A[a]=A[a-1]/0.21;
	  
	    B[a][a]=B[a-3][a-4]-A[a]/D[a][a][a]*E[a][a][a]+C[a][a][a];
	  
	    D[a][a][a]=D[a-5][a-1][a-1]+0.472;
	  
	    D[a][a][a]=D[a+3][a+4][a+1]-B[a][a]/C[a][a][a]+B[a][a]*A[a];
	  
	    C[a][a][a]=0.821;
	    C[a+1][a][a+3]=0.074;
	  
	    E[a][a][a]=B[a][a]*0.927/A[a];
	    A[a]=B[a-2][a-3]-C[a][a][a]*0.464;
	}

    return 0;
}