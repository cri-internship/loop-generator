#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(140, 270, "zeros");
	float **B = create_two_dim_float(90, 150, "zeros");

	for (int a = 3; a < 90; a++)
	{
	  
	    float var_a=B[a][a]/0.971;
	    float var_b=B[a-3][a-1]+0.095;
	}

    return 0;
}