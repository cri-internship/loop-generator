#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(210, 270, "random");
	float **B = create_two_dim_float(420, 140, "random");
	float **A = create_two_dim_float(20, 630, "random");
	float *E = create_one_dim_float(980, "random");
	float *C = create_one_dim_float(940, "random");

	for (int a = 5; a < 19; a++)
	{
	  
	    D[a][a]=D[a-5][a-4]/0.245;
	  
	    A[a][a]=A[a+1][a+1]/0.274;
	  
	    C[a]=A[a][a]-D[a][a]*B[a][a]+E[a];
	    C[a]=E[a]*D[a][a]+A[a][a]-B[a][a];
	  
	    A[a][a]=A[a][a]/C[a]-D[a][a];
	    B[a][a]=A[a-4][a]-C[a]/D[a][a]*E[a];
	  
	    E[a]=D[a][a]+E[a];
	    D[a][a]=D[a+1][a]*0.256;
	}

    return 0;
}