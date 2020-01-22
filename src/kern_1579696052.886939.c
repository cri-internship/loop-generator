#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(800, "ones");
	float **B = create_two_dim_float(670, 450, "ones");
	float *A = create_one_dim_float(230, "ones");

	for (int a = 5; a < 230; a++)
	{
	  
	    A[a]=C[a];
	    A[a]=A[a]-B[a][a];
	  
	    C[a]=C[a-2]/0.701;
	  
	    float var_a=A[a]+0.692;
	    A[a]=0.357;
	  
	    B[a][a]=0.161;
	    B[a-5][a-4]=0.29;
	  
	    B[a][a]=A[a];
	  
	    float var_b=B[a][a]-0.153;
	    float var_c=B[a+4][a+5]/0.064;
	}

    return 0;
}