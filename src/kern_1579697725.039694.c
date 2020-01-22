#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(60, 660, "ones");
	float ***B = create_three_dim_float(920, 1000, 640, "ones");
	float **D = create_two_dim_float(860, 30, "ones");
	float **C = create_two_dim_float(530, 540, "ones");

	for (int a = 2; a < 855; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-1][a-2]+0.239;
	  
	    B[a][a][a]=B[a+2][a+4][a+4]*C[a][a]-A[a][a]/D[a][a];
	  
	    float var_a=B[a][a][a]-0.147;
	    float var_b=B[a+1][a+2][a+4]/0.473;
	  
	    B[a][a][a]=D[a][a]+B[a][a][a];
	    A[a][a]=D[a][a+5]-A[a][a]*B[a][a][a]+C[a][a];
	}

    return 0;
}