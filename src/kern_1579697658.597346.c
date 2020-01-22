#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(400, 640, "ones");
	float *A = create_one_dim_float(110, "ones");
	float *E = create_one_dim_float(670, "ones");
	float **B = create_two_dim_float(700, 550, "ones");
	float *D = create_one_dim_float(490, "ones");

	for (int a = 5; a < 400; a++)
	{
	  
	    C[a][a]=C[a-1][a-5]-0.966*A[a];
	  
	    C[a][a]=C[a][a-3]+0.237;
	  
	    B[a][a]=B[a-3][a-2]*0.019+E[a]-D[a]/D[a];
	  
	    C[a][a]=C[a-1][a]-0.726;
	  
	    B[a][a]=C[a][a];
	  
	    float var_a=D[a]-0.721;
	    float var_b=D[a-1]/0.709;
	}

    return 0;
}