#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(480, 780, "random");
	float **A = create_two_dim_float(480, 70, "random");
	float *C = create_one_dim_float(100, "random");
	float **B = create_two_dim_float(500, 740, "random");

	for (int a = 5; a < 476; a++)
	{
	  
	    B[a][a]=B[a-2][a-1]/0.376;
	  
	    B[a][a]=B[a-2][a-5]-0.44;
	  
	    A[a][a]=A[a+1][a+3]+0.028;
	  
	    A[a][a]=A[a+4][a+4]-0.926;
	  
	    B[a][a]=B[a][a]-C[a]+0.692;
	    A[a][a]=B[a-5][a-4]/A[a][a]-D[a][a];
	  
	    C[a]=B[a][a]+C[a]*D[a][a]/A[a][a];
	    D[a][a]=B[a+1][a+4]/D[a][a]+A[a][a];
	}

    return 0;
}