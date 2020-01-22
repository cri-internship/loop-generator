#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(140, "random");
	float *E = create_one_dim_float(70, "random");
	float ***D = create_three_dim_float(680, 660, 840, "random");
	float ***C = create_three_dim_float(950, 570, 230, "random");
	float ***B = create_three_dim_float(260, 120, 420, "random");

	for (int a = 5; a < 69; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-5][a-3]-0.827*B[a][a][a]+E[a]/A[a];
	  
	    B[a][a][a]=B[a-5][a-5][a-5]*C[a][a][a]-E[a]/A[a]+0.856;
	  
	    B[a][a][a]=B[a+5][a+4][a+4]-0.309;
	  
	    E[a]=E[a+1]*C[a][a][a]/A[a];
	  
	    E[a]=D[a][a][a]*B[a][a][a]-A[a]+C[a][a][a];
	    C[a][a][a]=D[a+4][a+3][a+2]+A[a]*E[a]-B[a][a][a]/C[a][a][a];
	}

    return 0;
}