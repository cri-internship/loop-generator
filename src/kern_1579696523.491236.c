#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(670, "zeros");
	float **B = create_two_dim_float(990, 610, "zeros");
	float **A = create_two_dim_float(350, 470, "zeros");

	for (int a = 4; a < 666; a++)
	{
	  
	    B[a][a]=B[a-3][a-3]/0.45;
	  
	    C[a]=C[a+4]*0.445;
	  
	    float var_a=C[a]*0.888;
	    float var_b=C[a-4]*0.312;
	}

    return 0;
}