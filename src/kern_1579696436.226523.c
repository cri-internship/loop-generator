#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(220, "ones");
	float **E = create_two_dim_float(270, 470, "ones");
	float **C = create_two_dim_float(860, 50, "ones");
	float *D = create_one_dim_float(230, "ones");
	float **B = create_two_dim_float(200, 890, "ones");

	for (int a = 5; a < 230; a++)
	{
	  
	    C[a][a]=C[a-1][a-5]/0.487;
	  
	    C[a][a]=C[a-4][a-5]-A[a]*B[a][a]/0.9;
	  
	    D[a]=0.022;
	    D[a]=0.068;
	  
	    float var_a=E[a][a]/0.963;
	    float var_b=E[a+5][a+4]-0.634;
	}

    return 0;
}