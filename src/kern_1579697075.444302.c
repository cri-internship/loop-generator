#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(890, 880, "ones");
	float **A = create_two_dim_float(540, 160, "ones");
	float *E = create_one_dim_float(20, "ones");
	float ***C = create_three_dim_float(490, 820, 730, "ones");
	float **D = create_two_dim_float(270, 210, "ones");

	for (int a = 5; a < 19; a++)
	{
	  
	    D[a][a]=D[a-3][a-5]*E[a]+C[a][a][a]-B[a][a]/A[a][a];
	  
	    E[a]=E[a+1]+D[a][a];
	  
	    float var_a=A[a][a]/0.325;
	    float var_b=A[a-4][a-1]-0.979;
	}

    return 0;
}