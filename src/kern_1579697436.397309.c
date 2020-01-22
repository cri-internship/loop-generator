#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(170, "random");
	float *A = create_one_dim_float(100, "random");
	float ***D = create_three_dim_float(360, 120, 130, "random");
	float **B = create_two_dim_float(280, 750, "random");
	float *C = create_one_dim_float(440, "random");

	for (int a = 3; a < 166; a++)
	{
	  
	    C[a]=C[a-3]*D[a][a][a]+E[a]/B[a][a];
	  
	    C[a]=C[a+1]-0.659;
	  
	    E[a]=E[a+4]/0.008;
	  
	    D[a][a][a]=B[a][a]+C[a]-A[a]/0.734*C[a];
	    C[a]=B[a-3][a]*D[a][a][a]+E[a]/A[a]-C[a];
	}

    return 0;
}