#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(610, 20, "ones");
	float *C = create_one_dim_float(880, "ones");
	float ***B = create_three_dim_float(360, 230, 480, "ones");

	for (int a = 5; a < 360; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-3][a-2]-A[a][a]/C[a];
	  
	    A[a][a]=A[a+1][a+2]+0.656;
	  
	    A[a][a]=A[a+4][a+3]-0.869;
	  
	    B[a][a][a]=C[a];
	  
	    float var_a=C[a]*0.101;
	    float var_b=C[a-2]+0.446;
	}

    return 0;
}