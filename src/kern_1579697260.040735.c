#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(730, 210, "random");
	float *C = create_one_dim_float(740, "random");
	float **B = create_two_dim_float(780, 60, "random");
	float *D = create_one_dim_float(110, "random");

	for (int a = 5; a < 105; a++)
	{
	  
	    B[a][a]=B[a][a-5]/A[a][a]+D[a];
	  
	    D[a]=D[a+4]-C[a]/B[a][a];
	  
	    B[a][a]=C[a];
	  
	    float var_a=D[a]+0.967;
	    float var_b=D[a+5]+0.883;
	}

    return 0;
}