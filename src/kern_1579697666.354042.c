#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(1000, 220, "random");
	float ***B = create_three_dim_float(230, 60, 140, "random");
	float *A = create_one_dim_float(560, "random");
	float **D = create_two_dim_float(920, 970, "random");
	float **E = create_two_dim_float(50, 580, "random");

	for (int a = 4; a < 46; a++)
	{
	  
	    A[a]=A[a-4]/0.395;
	  
	    E[a][a]=E[a+4][a]*C[a][a]+B[a][a][a]/A[a]-D[a][a];
	  
	    A[a]=0.845;
	}

    return 0;
}