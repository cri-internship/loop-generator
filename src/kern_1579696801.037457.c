#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(830, 290, "ones");
	float **C = create_two_dim_float(650, 10, "ones");
	float ***A = create_three_dim_float(60, 570, 790, "ones");
	float **B = create_two_dim_float(520, 870, "ones");

	for (int a = 5; a < 60; a++)
	{
	  
	    C[a][a]=C[a-4][a-5]-B[a][a]+A[a][a][a];
	  
	    D[a][a]=D[a][a+2]+0.079;
	  
	    float var_a=A[a][a][a]*0.775;
	    float var_b=A[a-1][a-3][a-1]+0.638;
	}

    return 0;
}