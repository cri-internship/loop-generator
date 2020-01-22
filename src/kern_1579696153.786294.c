#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(700, 190, "zeros");
	float **D = create_two_dim_float(250, 360, "zeros");
	float *E = create_one_dim_float(830, "zeros");
	float **A = create_two_dim_float(180, 320, "zeros");
	float ***B = create_three_dim_float(680, 640, 910, "zeros");

	for (int a = 5; a < 175; a++)
	{
	  
	    C[a][a]=B[a][a][a]/D[a][a]*0.081;
	    A[a][a]=C[a][a]*A[a][a];
	  
	    C[a][a]=E[a]+C[a][a]*C[a][a]/D[a][a]-B[a][a][a];
	    E[a]=D[a][a]-B[a][a][a]*A[a][a]+C[a][a];
	  
	    A[a][a]=E[a];
	  
	    B[a][a][a]=E[a]/C[a][a]*D[a][a];
	    D[a][a]=E[a-5]*D[a][a]/B[a][a][a]-C[a][a];
	}

    return 0;
}