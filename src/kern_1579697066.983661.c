#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(230, "ones");
	float **A = create_two_dim_float(400, 990, "ones");
	float ***C = create_three_dim_float(930, 790, 520, "ones");

	for (int a = 3; a < 228; a++)
	{
	  
	    A[a][a]=A[a+5][a+3]*B[a]/C[a][a][a];
	  
	    A[a][a]=A[a+5][a]+0.714*B[a];
	  
	    C[a][a][a]=C[a+5][a][a+4]/A[a][a];
	  
	    C[a][a][a]=0.132;
	  
	    float var_a=B[a]+0.949;
	    float var_b=B[a+2]-0.037;
	}

    return 0;
}