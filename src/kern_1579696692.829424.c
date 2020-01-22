#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(530, 60, "ones");
	float **A = create_two_dim_float(550, 500, "ones");
	float **C = create_two_dim_float(810, 540, "ones");

	for (int a = 5; a < 546; a++)
	{
	  
	    C[a][a]=C[a-5][a]-B[a][a];
	  
	    C[a][a]=C[a+1][a+2]/A[a][a]+B[a][a];
	  
	    C[a][a]=A[a][a]*0.721/B[a][a];
	    A[a][a]=A[a+4][a+3]+B[a][a]/C[a][a];
	}

    return 0;
}