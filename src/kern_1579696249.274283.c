#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(550, 950, "random");
	float ***B = create_three_dim_float(500, 810, 490, "random");
	float *A = create_one_dim_float(580, "random");

	for (int a = 5; a < 500; a++)
	{
	  
	    B[a][a][a]=A[a]*C[a][a];
	    B[a-4][a-5][a-4]=A[a];
	  
	    C[a][a]=0.9;
	    C[a+2][a+3]=0.288;
	  
	    C[a][a]=B[a][a][a]-A[a];
	    A[a]=B[a-3][a-3][a-3]*C[a][a]+A[a];
	  
	    B[a][a][a]=A[a]-B[a][a][a];
	    C[a][a]=A[a+4]*C[a][a];
	}

    return 0;
}