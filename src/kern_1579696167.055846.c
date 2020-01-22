#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(120, "random");
	float *A = create_one_dim_float(50, "random");
	float *C = create_one_dim_float(790, "random");
	float *B = create_one_dim_float(830, "random");
	float *E = create_one_dim_float(940, "random");

	for (int a = 0; a < 120; a++)
	{
	  
	    D[a]=B[a]-E[a]*C[a];
	    A[a]=D[a]-A[a];
	}

    return 0;
}