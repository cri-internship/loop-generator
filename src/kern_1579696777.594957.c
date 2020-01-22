#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(990, "ones");
	float *A = create_one_dim_float(620, "ones");

	for (int a = 4; a < 615; a++)
	{
	  
	    B[a]=B[a-3]*0.519;
	  
	    A[a]=A[a-3]+0.461;
	  
	    A[a]=0.572;
	  
	    float var_a=A[a]*0.373;
	    float var_b=A[a-4]/0.757;
	  
	    A[a]=A[a]/B[a];
	    B[a]=A[a+5]+0.082;
	}

    return 0;
}