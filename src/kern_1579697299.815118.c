#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(790, 130, "ones");
	float **B = create_two_dim_float(330, 720, "ones");

	for (int a = 4; a < 330; a++)
	{
	  
	    B[a][a]=B[a-4][a-4]/0.181;
	  
	    A[a][a]=0.49;
	    A[a+1][a+3]=0.836;
	  
	    A[a][a]=B[a][a];
	  
	    float var_a=B[a][a]-0.197;
	    float var_b=B[a-2][a]+0.021;
	}

    return 0;
}