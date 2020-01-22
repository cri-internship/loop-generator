#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(680, 630, "random");
	float **C = create_two_dim_float(130, 360, "random");
	float ***A = create_three_dim_float(10, 890, 170, "random");
	float ***D = create_three_dim_float(10, 890, 400, "random");

	for (int a = 5; a < 5; a++)
	{
	  
	    A[a][a][a]=A[a-5][a][a]-B[a][a]*C[a][a]/0.582;
	  
	    D[a][a][a]=D[a][a-4][a-3]+0.965;
	  
	    D[a][a][a]=D[a-4][a-4][a-3]/A[a][a][a];
	  
	    D[a][a][a]=D[a][a+5][a+4]*0.046;
	  
	    B[a][a]=0.938;
	    B[a-5][a-4]=0.01;
	  
	    float var_a=A[a][a][a]*0.577;
	    float var_b=A[a+5][a+3][a+3]+0.077;
	}

    return 0;
}