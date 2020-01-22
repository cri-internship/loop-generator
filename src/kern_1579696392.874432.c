#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(80, "ones");
	float *A = create_one_dim_float(480, "ones");
	float **E = create_two_dim_float(110, 380, "ones");
	float ***C = create_three_dim_float(130, 920, 900, "ones");
	float *B = create_one_dim_float(180, "ones");

	for (int a = 4; a < 80; a++)
	{
	  
	    E[a][a]=E[a-4][a-4]/0.625;
	  
	    D[a]=0.64;
	    D[a]=0.476;
	  
	    float var_a=D[a]-0.703;
	    float var_b=D[a-3]*0.809;
	}

    return 0;
}