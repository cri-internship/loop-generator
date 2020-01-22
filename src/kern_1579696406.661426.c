#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(40, "zeros");
	float *C = create_one_dim_float(650, "zeros");
	float **B = create_two_dim_float(120, 370, "zeros");
	float **A = create_two_dim_float(700, 170, "zeros");
	float *E = create_one_dim_float(270, "zeros");

	for (int a = 4; a < 120; a++)
	{
	  
	    B[a][a]=B[a][a-4]+0.726;
	  
	    float var_a=A[a][a]+0.757;
	    float var_b=A[a+3][a+3]+0.808;
	}

    return 0;
}