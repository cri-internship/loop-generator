#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(980, 540, 120, "random");
	float **C = create_two_dim_float(300, 380, "random");
	float ***B = create_three_dim_float(110, 1000, 380, "random");
	float ***A = create_three_dim_float(10, 290, 730, "random");

	for (int a = 3; a < 979; a++)
	{
	  
	    D[a][a][a]=D[a][a-3][a-3]*0.702;
	  
	    float var_a=D[a][a][a]/0.298;
	    float var_b=D[a+1][a][a+1]*0.421;
	}

    return 0;
}