#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(640, "ones");
	float **C = create_two_dim_float(340, 550, "ones");
	float ***D = create_three_dim_float(360, 360, 800, "ones");
	float *B = create_one_dim_float(970, "ones");

	for (int a = 5; a < 336; a++)
	{
	  
	    D[a][a][a]=D[a-4][a][a-5]/0.474;
	  
	    A[a]=A[a-5]-0.672;
	  
	    C[a][a]=C[a+1][a]+B[a]/D[a][a][a];
	  
	    D[a][a][a]=B[a]-A[a]/C[a][a]+C[a][a];
	    B[a]=C[a][a]-A[a]+0.566;
	  
	    C[a][a]=0.527;
	  
	    float var_a=C[a][a]/0.096;
	    float var_b=C[a-2][a-4]/0.837;
	  
	    float var_c=B[a]+0.368;
	    float var_d=B[a+2]-0.502;
	}

    return 0;
}