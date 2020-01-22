#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(420, 260, 620, "random");
	float **B = create_two_dim_float(470, 810, "random");
	float ***A = create_three_dim_float(780, 150, 10, "random");

	for (int a = 0; a < 415; a++)
	{
	  
	    A[a][a][a]=A[a+4][a+4][a]-B[a][a];
	  
	    A[a][a][a]=A[a+2][a+2][a+1]*C[a][a][a]/0.891;
	  
	    C[a][a][a]=C[a+5][a+3][a+1]/0.212;
	  
	    B[a][a]=A[a][a][a]*B[a][a];
	    C[a][a][a]=A[a+4][a+2][a+4]-C[a][a][a]*B[a][a];
	}

    return 0;
}