#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(890, 240, "ones");
	float **B = create_two_dim_float(60, 360, "ones");
	float *A = create_one_dim_float(380, "ones");
	float *C = create_one_dim_float(720, "ones");

	for (int a = 5; a < 60; a++)
	{
	  
	    B[a][a]=B[a-1][a-3]*C[a];
	  
	    C[a]=C[a+3]+0.821;
	  
	    A[a]=0.827;
	    A[a-5]=0.124;
	  
	    D[a][a]=0.604*C[a]-A[a];
	    D[a-4][a]=C[a]*B[a][a];
	  
	    D[a][a]=B[a][a]-C[a]/A[a];
	}

    return 0;
}