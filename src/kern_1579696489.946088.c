#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(650, 300, "ones");
	float ***D = create_three_dim_float(670, 690, 30, "ones");
	float **C = create_two_dim_float(520, 30, "ones");
	float **A = create_two_dim_float(560, 190, "ones");
	float *B = create_one_dim_float(50, "ones");

	for (int a = 5; a < 520; a++)
	{
	  
	    A[a][a]=A[a-5][a-3]-0.666;
	  
	    C[a][a]=C[a-3][a-1]/0.068;
	  
	    E[a][a]=E[a-1][a-3]-0.574;
	  
	    C[a][a]=E[a][a]-B[a]*C[a][a]+D[a][a][a]/A[a][a];
	    A[a][a]=E[a][a-2]/A[a][a]*B[a]-C[a][a]+D[a][a][a];
	}

    return 0;
}