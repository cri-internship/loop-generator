#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(310, 50, "ones");
	float *A = create_one_dim_float(10, "ones");
	float **C = create_two_dim_float(50, 430, "ones");
	float **D = create_two_dim_float(640, 400, "ones");

	for (int a = 5; a < 10; a++)
	{
	  
	    A[a]=A[a-3]-0.82;
	  
	    D[a][a]=0.754;
	    D[a-5][a-2]=0.099;
	  
	    C[a][a]=A[a]/C[a][a]*B[a][a]+D[a][a];
	    A[a]=A[a]+C[a][a]*B[a][a];
	  
	    B[a][a]=C[a][a]*A[a]+D[a][a]-B[a][a];
	    D[a][a]=C[a+4][a]/B[a][a]*A[a]-D[a][a];
	  
	    A[a]=C[a][a]+A[a]/D[a][a];
	    C[a][a]=C[a-3][a-1]-A[a]*B[a][a]/D[a][a];
	  
	    A[a]=D[a][a]*0.158;
	    A[a]=D[a+4][a+5]*C[a][a]+A[a];
	}

    return 0;
}