#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(120, 200, "ones");
	float *C = create_one_dim_float(650, "ones");
	float **A = create_two_dim_float(950, 950, "ones");

	for (int a = 4; a < 118; a++)
	{
	  
	    A[a][a]=A[a-1][a-4]+B[a][a]-C[a];
	  
	    C[a]=A[a][a]/B[a][a];
	    C[a]=C[a]*0.469;
	  
	    A[a][a]=A[a+3][a+2]-0.701;
	  
	    A[a][a]=A[a+4][a+1]+0.493;
	  
	    float var_a=A[a][a]-0.802;
	    float var_b=A[a+5][a+2]*0.999;
	  
	    B[a][a]=B[a][a]/A[a][a]*C[a];
	    A[a][a]=B[a][a+2]/0.673-A[a][a];
	}

    return 0;
}