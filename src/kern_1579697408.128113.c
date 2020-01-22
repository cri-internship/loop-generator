#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(450, 560, "zeros");
	float **C = create_two_dim_float(170, 210, "zeros");
	float **E = create_two_dim_float(860, 60, "zeros");
	float **D = create_two_dim_float(980, 240, "zeros");
	float **A = create_two_dim_float(510, 340, "zeros");

	for (int a = 5; a < 166; a++)
	{
	  
	    E[a][a]=E[a+1][a]/A[a][a]+C[a][a]*B[a][a]-D[a][a];
	  
	    B[a][a]=0.487;
	    B[a+2][a+2]=0.733;
	  
	    D[a][a]=A[a][a]+E[a][a]/E[a][a]-B[a][a];
	    E[a][a]=A[a-5][a-3]/B[a][a]+C[a][a];
	  
	    float var_a=C[a][a]-0.461;
	    float var_b=C[a+1][a+4]*0.101;
	  
	    C[a][a]=D[a][a]+E[a][a];
	    A[a][a]=D[a+1][a+1]*C[a][a]-B[a][a]+E[a][a]/A[a][a];
	}

    return 0;
}