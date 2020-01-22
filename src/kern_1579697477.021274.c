#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(240, 400, "ones");
	float **A = create_two_dim_float(930, 640, "ones");

	for (int a = 4; a < 240; a++)
	{
	  
	    B[a][a]=B[a-1][a-4]-0.044;
	  
	    float var_a=A[a][a]-0.482;
	    float var_b=A[a-4][a-4]/0.911;
	}

    return 0;
}