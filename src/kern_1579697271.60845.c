#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(710, 840, "ones");
	float *A = create_one_dim_float(330, "ones");
	float *C = create_one_dim_float(130, "ones");
	float ***E = create_three_dim_float(560, 930, 460, "ones");
	float ***D = create_three_dim_float(960, 100, 450, "ones");

	for (int a = 5; a < 128; a++)
	{
	  
	    B[a][a]=B[a+1][a+1]+A[a]-C[a];
	  
	    B[a][a]=D[a][a][a]-E[a][a][a]*B[a][a]+B[a][a];
	    A[a]=D[a-5][a-1][a]-B[a][a];
	  
	    float var_a=C[a]/0.474;
	    float var_b=C[a+2]*0.052;
	}

    return 0;
}