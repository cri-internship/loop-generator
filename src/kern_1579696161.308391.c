#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(60, "random");
	float **C = create_two_dim_float(480, 390, "random");
	float *B = create_one_dim_float(110, "random");

	for (int a = 5; a < 60; a++)
	{
	  
	    A[a]=A[a-5]*0.888;
	  
	    C[a][a]=C[a-5][a-1]-0.106;
	  
	    A[a]=0.585;
	  
	    A[a]=A[a]*C[a][a];
	    C[a][a]=A[a]*B[a];
	}

    return 0;
}