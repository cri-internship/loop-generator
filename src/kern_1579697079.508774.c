#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(210, 470, "ones");
	float *B = create_one_dim_float(410, "ones");
	float *C = create_one_dim_float(880, "ones");

	for (int a = 5; a < 210; a++)
	{
	  
	    B[a]=B[a-3]-A[a][a]/C[a];
	  
	    C[a]=C[a-2]-0.371;
	  
	    B[a]=B[a-4]-0.425;
	  
	    C[a]=C[a+1]/0.277;
	  
	    A[a][a]=0.192;
	    A[a][a]=0.861;
	  
	    float var_a=B[a]+0.07;
	    float var_b=B[a]+0.854;
	  
	    A[a][a]=A[a][a]-0.681+B[a];
	    B[a]=A[a-5][a-5]+B[a]/C[a];
	}

    return 0;
}