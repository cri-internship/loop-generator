#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(50, 480, "ones");
	float *B = create_one_dim_float(330, "ones");
	float **D = create_two_dim_float(50, 240, "ones");
	float ***C = create_three_dim_float(990, 830, 140, "ones");

	for (int a = 4; a < 45; a++)
	{
	  
	    B[a]=B[a-3]-C[a][a][a];
	  
	    D[a][a]=D[a][a-4]*B[a]+0.079-A[a][a];
	  
	    D[a][a]=D[a-2][a-4]/C[a][a][a]-B[a]*A[a][a];
	  
	    A[a][a]=A[a][a+5]*0.961;
	  
	    B[a]=B[a+3]/0.565;
	}

    return 0;
}