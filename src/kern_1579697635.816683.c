#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(540, 920, 560, "zeros");

	for (int a = 2; a < 540; a++)
	{
	  
	    float var_a=A[a][a][a]+0.667;
	    float var_b=A[a][a][a-2]+0.408;
	}

    return 0;
}