#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(480, 840, 890, "ones");
	float *D = create_one_dim_float(420, "ones");
	float *A = create_one_dim_float(610, "ones");
	float *B = create_one_dim_float(70, "ones");

	for (int a = 5; a < 480; a++)
	{
	  
	    float var_a=C[a][a][a]*0.124;
	    float var_b=C[a-1][a-5][a-5]-0.267;
	}

    return 0;
}