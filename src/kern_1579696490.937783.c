#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(360, 130, 200, "random");
	float *B = create_one_dim_float(260, "random");
	float *A = create_one_dim_float(470, "random");

	for (int a = 5; a < 255; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-5][a-5]-B[a]+A[a];
	  
	    A[a]=C[a][a][a];
	    A[a]=A[a]+B[a]/0.465;
	  
	    B[a]=B[a-2]/0.303;
	  
	    A[a]=A[a-5]+B[a]*C[a][a][a];
	  
	    A[a]=A[a+4]/0.13;
	  
	    B[a]=B[a+5]/0.16*C[a][a][a];
	  
	    float var_a=A[a]-0.872;
	    float var_b=A[a+5]-0.716;
	}

    return 0;
}