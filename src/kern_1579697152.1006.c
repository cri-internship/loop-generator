#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(960, "zeros");
	float *C = create_one_dim_float(730, "zeros");
	float *B = create_one_dim_float(710, "zeros");

	for (int a = 5; a < 707; a++)
	{
	  
	    B[a]=B[a-1]-C[a]/A[a];
	  
	    B[a]=B[a-4]/C[a]-A[a];
	  
	    C[a]=C[a-5]/0.041-B[a];
	  
	    C[a]=C[a+1]+0.807;
	  
	    B[a]=B[a+3]*C[a]+A[a];
	  
	    float var_a=C[a]/0.398;
	    float var_b=C[a+2]-0.326;
	}

    return 0;
}