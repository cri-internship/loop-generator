#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 290, "ones");

	for (int a = 5; a < 106; a++)
	{
	  
	    A[a][a]=A[a-5][a-1]+0.506;
	  
	    float var_a=A[a][a]-0.106;
	    float var_b=A[a+3][a+4]+0.661;
	  
	    float var_c=A[a][a]+0.205;
	    float var_d=A[a-1][a-4]*0.591;
	}

    return 0;
}