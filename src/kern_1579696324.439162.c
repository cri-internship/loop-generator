#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(990, 440, 390, "ones");
	float **B = create_two_dim_float(530, 510, "ones");

	for (int a = 0; a < 985; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+1][a+1]*0.405;
	  
	    A[a][a][a]=0.391;
	  
	    float var_a=A[a][a][a]+0.903;
	    float var_b=A[a+3][a+2][a+5]-0.821;
	}

    return 0;
}