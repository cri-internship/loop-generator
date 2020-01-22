#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(170, "random");
	float **C = create_two_dim_float(480, 510, "random");
	float ***B = create_three_dim_float(60, 440, 190, "random");

	for (int a = 4; a < 57; a++)
	{
	  
	    C[a][a]=C[a-4][a-1]/0.336;
	  
	    C[a][a]=C[a+4][a+1]-B[a][a][a]*0.956;
	  
	    B[a][a][a]=B[a+1][a+2][a+3]-C[a][a];
	  
	    B[a][a][a]=C[a][a];
	  
	    float var_a=B[a][a][a]*0.116;
	    float var_b=B[a-2][a-2][a-1]/0.554;
	}

    return 0;
}