#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(120, "zeros");
	float ***A = create_three_dim_float(300, 620, 720, "zeros");
	float *B = create_one_dim_float(610, "zeros");
	float **C = create_two_dim_float(240, 80, "zeros");

	for (int a = 4; a < 116; a++)
	{
	  
	    D[a]=D[a-4]*0.89-B[a]+A[a][a][a];
	  
	    D[a]=C[a][a];
	  
	    float var_a=C[a][a]+0.466;
	    float var_b=C[a][a-3]-0.982;
	  
	    A[a][a][a]=A[a][a][a]/D[a]+C[a][a];
	    B[a]=A[a-4][a-3][a-4]*0.788-C[a][a];
	}

    return 0;
}