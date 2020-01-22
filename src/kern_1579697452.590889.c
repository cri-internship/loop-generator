#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(360, 370, "random");
	float ***D = create_three_dim_float(870, 890, 620, "random");
	float ***B = create_three_dim_float(270, 930, 990, "random");
	float *C = create_one_dim_float(130, "random");

	for (int a = 2; a < 130; a++)
	{
	  
	    C[a]=C[a-2]*0.676;
	  
	    float var_a=B[a][a][a]*0.589;
	    float var_b=B[a+1][a][a+4]/0.324;
	}

    return 0;
}