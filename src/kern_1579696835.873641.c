#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(500, 520, "zeros");
	float *A = create_one_dim_float(750, "zeros");
	float *E = create_one_dim_float(70, "zeros");
	float **C = create_two_dim_float(350, 230, "zeros");
	float *B = create_one_dim_float(800, "zeros");

	for (int a = 4; a < 495; a++)
	{
	  
	    D[a][a]=D[a][a-3]-0.223;
	  
	    D[a][a]=D[a-1][a-1]/E[a]*B[a]-A[a]+C[a][a];
	  
	    A[a]=A[a-3]*D[a][a]+E[a];
	  
	    D[a][a]=D[a+5][a+2]-A[a]/C[a][a]*B[a];
	  
	    E[a]=A[a]+C[a][a];
	    A[a]=A[a-4]*D[a][a]+C[a][a]/E[a]-0.146;
	  
	    B[a]=B[a]+D[a][a]/C[a][a];
	    D[a][a]=B[a+3]*A[a];
	}

    return 0;
}