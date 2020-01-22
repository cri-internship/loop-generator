#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(540, 490, "ones");

	for (int a = 4; a < 537; a++)
	{
	  
	    A[a][a]=A[a-4][a]+0.994;
	  
	    float var_a=A[a][a]+0.131;
	    float var_b=A[a+3][a+3]+0.613;
	}

    return 0;
}