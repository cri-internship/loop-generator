#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(330, "random");
	float **D = create_two_dim_float(430, 390, "random");
	float ***E = create_three_dim_float(720, 580, 700, "random");
	float *B = create_one_dim_float(670, "random");
	float **C = create_two_dim_float(290, 180, "random");

	for (int a = 4; a < 290; a++)
	{
	  
	    C[a][a]=C[a-1][a-4]/0.495;
	  
	    B[a]=0.462;
	    B[a-4]=0.58;
	  
	    float var_a=C[a][a]+0.769;
	    float var_b=C[a-2][a-4]+0.575;
	}

    return 0;
}