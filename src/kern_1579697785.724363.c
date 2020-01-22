#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(260, "zeros");
	float *C = create_one_dim_float(680, "zeros");
	float ***D = create_three_dim_float(1000, 290, 560, "zeros");
	float *A = create_one_dim_float(980, "zeros");

	for (int a = 5; a < 259; a++)
	{
	  
	    B[a]=B[a-2]/A[a]+C[a]-D[a][a][a];
	  
	    D[a][a][a]=0.767;
	    D[a-1][a-1][a-5]=0.782;
	  
	    B[a]=D[a][a][a]+0.253/A[a]-B[a];
	    C[a]=D[a+1][a+5][a]-C[a];
	  
	    float var_a=B[a]*0.248;
	    float var_b=B[a+1]/0.329;
	  
	    D[a][a][a]=B[a]-A[a]+0.93;
	}

    return 0;
}