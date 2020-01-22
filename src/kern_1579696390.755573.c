#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(150, "ones");
	float **E = create_two_dim_float(730, 60, "ones");
	float *A = create_one_dim_float(100, "ones");
	float **B = create_two_dim_float(310, 400, "ones");
	float **C = create_two_dim_float(200, 550, "ones");

	for (int a = 0; a < 100; a++)
	{
	  
	    float var_a=E[a][a]-0.576;
	    E[a][a]=0.737;
	  
	    B[a][a]=B[a+5][a+5]+0.15;
	  
	    E[a][a]=E[a][a+5]+C[a][a]*B[a][a];
	  
	    B[a][a]=A[a]+E[a][a]*D[a];
	    A[a]=D[a]+E[a][a]*B[a][a]-0.647;
	  
	    float var_b=B[a][a]*0.892;
	    float var_c=B[a+3][a]+0.722;
	}

    return 0;
}