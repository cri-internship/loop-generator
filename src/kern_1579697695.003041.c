#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(90, 90, 890, "zeros");
	float *C = create_one_dim_float(170, "zeros");
	float **B = create_two_dim_float(580, 300, "zeros");

	for (int a = 4; a < 87; a++)
	{
	  
	    C[a]=C[a-4]*0.69;
	  
	    C[a]=0.782;
	  
	    B[a][a]=C[a]-A[a][a][a];
	    B[a-1][a-3]=C[a]-A[a][a][a];
	  
	    B[a][a]=0.613;
	  
	    B[a][a]=A[a][a][a]-B[a][a]*C[a];
	    A[a][a][a]=A[a+1][a][a+3]-C[a];
	}

    return 0;
}