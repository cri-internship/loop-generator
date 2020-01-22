#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(290, "random");
	float ***B = create_three_dim_float(220, 560, 740, "random");
	float *A = create_one_dim_float(10, "random");
	float **D = create_two_dim_float(520, 680, "random");

	for (int a = 2; a < 215; a++)
	{
	  
	    D[a][a]=D[a-2][a]+0.751;
	  
	    B[a][a][a]=B[a+5][a+5][a+5]/C[a]*0.284+A[a];
	  
	    float var_a=B[a][a][a]+0.716;
	    float var_b=B[a+4][a+5][a+1]+0.722;
	}

    return 0;
}