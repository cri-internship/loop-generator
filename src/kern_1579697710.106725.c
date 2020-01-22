#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(430, 940, 510, "random");
	float ***B = create_three_dim_float(180, 680, 20, "random");
	float ***A = create_three_dim_float(230, 60, 140, "random");
	float **C = create_two_dim_float(220, 490, "random");

	for (int a = 5; a < 176; a++)
	{
	  
	    C[a][a]=C[a-1][a-5]/A[a][a][a]+0.105;
	  
	    B[a][a][a]=C[a][a]-A[a][a][a]+C[a][a];
	    B[a+1][a][a+2]=D[a][a][a]/C[a][a];
	  
	    float var_a=B[a][a][a]+0.974;
	    float var_b=B[a+3][a+4][a+1]-0.052;
	}

    return 0;
}