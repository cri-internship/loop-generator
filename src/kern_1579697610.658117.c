#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(880, 670, "zeros");
	float ***B = create_three_dim_float(540, 860, 300, "zeros");

	for (int a = 0; a < 536; a++)
	{
	  
	    B[a][a][a]=A[a][a];
	    B[a+2][a+4][a]=A[a][a];
	  
	    float var_a=B[a][a][a]/0.454;
	    float var_b=B[a+1][a+2][a+4]*0.612;
	}

    return 0;
}