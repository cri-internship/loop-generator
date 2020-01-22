#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(120, 410, 80, "zeros");
	float **A = create_two_dim_float(770, 560, "zeros");
	float ***D = create_three_dim_float(450, 290, 140, "zeros");
	float ***E = create_three_dim_float(750, 960, 990, "zeros");
	float ***C = create_three_dim_float(990, 700, 680, "zeros");

	for (int a = 5; a < 120; a++)
	{
	  
	    E[a][a][a]=E[a-5][a-1][a-1]*A[a][a]/0.069;
	  
	    C[a][a][a]=C[a+1][a+1][a+5]+E[a][a][a]-B[a][a][a];
	  
	    D[a][a][a]=0.894;
	    D[a-5][a-2][a-4]=0.058;
	  
	    D[a][a][a]=0.144;
	  
	    float var_a=B[a][a][a]*0.141;
	    float var_b=B[a-4][a-3][a-1]*0.459;
	}

    return 0;
}