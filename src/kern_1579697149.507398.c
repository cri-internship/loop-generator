#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(380, "ones");
	float **A = create_two_dim_float(190, 380, "ones");
	float ***B = create_three_dim_float(800, 760, 910, "ones");

	for (int a = 5; a < 190; a++)
	{
	  
	    A[a][a]=A[a][a-3]/0.319;
	  
	    A[a][a]=A[a-3][a]+0.58;
	  
	    B[a][a][a]=B[a][a-2][a-5]/C[a];
	  
	    C[a]=A[a][a]+B[a][a][a];
	    C[a-1]=0.435;
	  
	    C[a]=C[a]+0.037-A[a][a];
	    A[a][a]=C[a-4]*B[a][a][a]-A[a][a];
	  
	    float var_a=B[a][a][a]/0.081;
	    float var_b=B[a][a+3][a+4]+0.565;
	}

    return 0;
}