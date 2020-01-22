#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(90, 910, 660, "zeros");
	float *C = create_one_dim_float(380, "zeros");
	float **B = create_two_dim_float(780, 290, "zeros");

	for (int a = 5; a < 90; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-4][a-1]-0.697;
	  
	    A[a][a][a]=A[a-3][a][a-4]-0.924;
	  
	    C[a]=C[a+1]+A[a][a][a];
	  
	    C[a]=0.762;
	  
	    B[a][a]=0.877;
	    B[a+3][a+4]=0.91;
	  
	    B[a][a]=0.634;
	  
	    float var_a=A[a][a][a]/0.764;
	    float var_b=A[a-1][a-5][a-4]*0.287;
	}

    return 0;
}