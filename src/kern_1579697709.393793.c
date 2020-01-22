#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(530, "random");
	float ***E = create_three_dim_float(930, 320, 920, "random");
	float **A = create_two_dim_float(60, 300, "random");
	float *D = create_one_dim_float(300, "random");
	float *B = create_one_dim_float(970, "random");

	for (int a = 5; a < 298; a++)
	{
	  
	    B[a]=B[a-4]*0.593;
	  
	    C[a]=C[a-2]-0.712;
	  
	    E[a][a][a]=E[a+4][a][a+2]/0.716;
	  
	    D[a]=D[a+1]*0.881;
	  
	    B[a]=B[a]+A[a][a]*C[a]-0.159/E[a][a][a];
	    C[a]=B[a-5]/C[a]-E[a][a][a];
	  
	    E[a][a][a]=D[a]+B[a]-C[a]*E[a][a][a];
	    A[a][a]=D[a+2]-0.57;
	}

    return 0;
}