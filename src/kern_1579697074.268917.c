#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(320, "zeros");
	float **B = create_two_dim_float(270, 250, "zeros");
	float **D = create_two_dim_float(590, 150, "zeros");
	float *A = create_one_dim_float(660, "zeros");
	float **C = create_two_dim_float(600, 780, "zeros");

	for (int a = 5; a < 320; a++)
	{
	  
	    E[a]=E[a-3]*0.945;
	  
	    D[a][a]=D[a][a-5]*0.8;
	  
	    D[a][a]=0.081+C[a][a];
	  
	    C[a][a]=D[a][a];
	    C[a+3][a+3]=A[a]-D[a][a]*B[a][a];
	}

    return 0;
}