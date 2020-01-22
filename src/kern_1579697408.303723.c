#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(730, 320, 220, "ones");
	float ***A = create_three_dim_float(60, 140, 540, "ones");
	float **C = create_two_dim_float(800, 750, "ones");

	for (int a = 5; a < 57; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-2][a-1]*0.837;
	  
	    A[a][a][a]=A[a-1][a-1][a-2]*0.124;
	  
	    B[a][a][a]=B[a+4][a+2][a+2]/0.233;
	  
	    C[a][a]=0.505;
	    C[a-3][a-1]=0.192;
	  
	    A[a][a][a]=A[a][a][a]+B[a][a][a];
	    C[a][a]=A[a+3][a][a+3]/0.656-B[a][a][a];
	  
	    float var_a=B[a][a][a]-0.013;
	    float var_b=B[a-3][a-3][a]+0.892;
	}

    return 0;
}