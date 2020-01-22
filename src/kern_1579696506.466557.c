#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(590, 500, "zeros");
	float **D = create_two_dim_float(110, 570, "zeros");
	float *B = create_one_dim_float(940, "zeros");
	float ***C = create_three_dim_float(460, 580, 720, "zeros");
	float **E = create_two_dim_float(340, 210, "zeros");

	for (int a = 5; a < 105; a++)
	{
	  
	    A[a][a]=A[a+3][a+3]*C[a][a][a]/B[a]-D[a][a]+E[a][a];
	  
	    C[a][a][a]=C[a+5][a+2][a+5]+0.102;
	  
	    D[a][a]=A[a][a];
	    D[a+4][a+5]=A[a][a]*E[a][a]+B[a]/C[a][a][a];
	  
	    B[a]=D[a][a]/A[a][a]+C[a][a][a];
	    B[a]=C[a][a][a]+E[a][a];
	  
	    A[a][a]=C[a][a][a]-B[a]/E[a][a];
	  
	    float var_a=C[a][a][a]+0.072;
	    float var_b=C[a+3][a][a+5]+0.819;
	  
	    C[a][a][a]=D[a][a]/C[a][a][a];
	    B[a]=D[a][a-5]*E[a][a];
	}

    return 0;
}