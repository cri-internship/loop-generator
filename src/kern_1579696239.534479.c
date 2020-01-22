#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(400, 600, "ones");

	for (int a = 3; a < 400; a++)
	{
	  
	    A[a][a]=0.53;
	    A[a][a]=0.789;
	  
	    float var_a=A[a][a]+0.204;
	    float var_b=A[a-1][a-3]+0.4;
	}

    return 0;
}