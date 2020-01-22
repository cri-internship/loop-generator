#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(990, "random");
	float *B = create_one_dim_float(400, "random");
	float ***A = create_three_dim_float(930, 40, 700, "random");
	float *D = create_one_dim_float(180, "random");
	float *C = create_one_dim_float(380, "random");

	for (int a = 5; a < 377; a++)
	{
	  
	    E[a]=E[a-5]/0.793;
	  
	    B[a]=B[a+4]+0.623;
	  
	    A[a][a][a]=A[a+1][a+4][a+5]-D[a]*B[a]+E[a];
	  
	    E[a]=A[a][a][a]+C[a]/A[a][a][a]-B[a];
	  
	    D[a]=A[a][a][a]*0.276;
	    B[a]=A[a+5][a+1][a+1]/B[a]*D[a];
	  
	    float var_a=C[a]-0.14;
	    float var_b=C[a+3]/0.418;
	}

    return 0;
}