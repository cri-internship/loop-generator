#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(90, 430, 90, "zeros");
	float **B = create_two_dim_float(720, 150, "zeros");
	float *A = create_one_dim_float(800, "zeros");

	for (int a = 5; a < 90; a++)
	{
	  
	    C[a][a][a]=C[a-3][a-5][a-1]+A[a];
	  
	    B[a][a]=B[a+1][a+1]/0.013;
	  
	    C[a][a][a]=0.283;
	  
	    A[a]=A[a]*C[a][a][a]/B[a][a];
	    B[a][a]=A[a-1]/B[a][a]+0.45;
	  
	    float var_a=C[a][a][a]+0.801;
	    float var_b=C[a-2][a-3][a]*0.373;
	}

    return 0;
}