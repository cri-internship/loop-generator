#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(850, "random");
	float *B = create_one_dim_float(240, "random");
	float *C = create_one_dim_float(220, "random");
	float **D = create_two_dim_float(270, 530, "random");
	float ***E = create_three_dim_float(150, 930, 750, "random");

	for (int a = 0; a < 238; a++)
	{
	  
	    A[a]=B[a]-A[a]/E[a][a][a]*D[a][a]+C[a];
	    B[a]=B[a+2]/C[a]*E[a][a][a]+D[a][a]-A[a];
	}

    return 0;
}