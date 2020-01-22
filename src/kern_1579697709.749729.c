#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(230, "random");
	float *A = create_one_dim_float(630, "random");
	float *B = create_one_dim_float(400, "random");

	for (int a = 1; a < 225; a++)
	{
	  
	    A[a]=A[a+5]-B[a]/C[a];
	  
	    B[a]=B[a+5]-A[a]/C[a];
	  
	    A[a]=0.131;
	  
	    B[a]=B[a]+A[a];
	    C[a]=B[a+1]+A[a];
	  
	    float var_a=C[a]-0.355;
	    float var_b=C[a+5]+0.779;
	  
	    A[a]=C[a]+0.804;
	    A[a]=C[a+2]*B[a];
	  
	    float var_c=A[a]/0.31;
	    float var_d=A[a-1]/0.366;
	}

    return 0;
}