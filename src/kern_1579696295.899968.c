#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(550, "zeros");
	float **C = create_two_dim_float(640, 20, "zeros");
	float *D = create_one_dim_float(450, "zeros");
	float *A = create_one_dim_float(260, "zeros");

	for (int a = 0; a < 447; a++)
	{
	  
	    B[a]=D[a];
	    D[a]=B[a]*A[a];
	  
	    C[a][a]=D[a]/C[a][a]+B[a]*A[a];
	    A[a]=D[a+3]+A[a];
	}

    return 0;
}