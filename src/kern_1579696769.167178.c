#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(400, 650, "zeros");
	float *A = create_one_dim_float(640, "zeros");

	for (int a = 5; a < 400; a++)
	{
	  
	    B[a][a]=B[a-5][a-3]*0.454;
	  
	    float var_a=A[a]/0.026;
	    float var_b=A[a-2]/0.821;
	  
	    float var_c=A[a]+0.709;
	    float var_d=A[a+2]+0.854;
	}

    return 0;
}