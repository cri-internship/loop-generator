#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(950, "random");
	float ***C = create_three_dim_float(450, 220, 220, "random");
	float *A = create_one_dim_float(380, "random");

	for (int a = 5; a < 380; a++)
	{
	  
	    B[a]=B[a-4]-A[a]*C[a][a][a];
	  
	    C[a][a][a]=C[a][a+1][a+4]*0.6;
	  
	    C[a][a][a]=C[a+2][a][a+5]*B[a]+B[a];
	  
	    C[a][a][a]=C[a+4][a+2][a+3]/0.177;
	  
	    A[a]=0.419;
	    A[a]=0.096;
	  
	    float var_a=C[a][a][a]*0.602;
	    float var_b=C[a-5][a-5][a-1]-0.764;
	  
	    B[a]=A[a]-C[a][a][a]+0.381;
	    C[a][a][a]=A[a]+C[a][a][a]*B[a];
	}

    return 0;
}