#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(510, "ones");
	float *B = create_one_dim_float(120, "ones");
	float ***D = create_three_dim_float(760, 930, 310, "ones");
	float *A = create_one_dim_float(230, "ones");

	for (int a = 4; a < 117; a++)
	{
	  
	    C[a]=C[a-4]/D[a][a][a]*B[a]-A[a];
	  
	    D[a][a][a]=D[a-3][a][a-2]+0.414;
	  
	    float  var_a=C[a]+0.279;
	  
	    D[a][a][a]=D[a+2][a+3][a+3]/0.694;
	  
	    D[a][a][a]=D[a][a][a+5]-A[a]+C[a];
	  
	    C[a]=0.93;
	  
	    B[a]=B[a]-D[a][a][a];
	    C[a]=B[a+3]+0.347;
	}

    return 0;
}