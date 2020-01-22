#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(350, 550, 120, "random");
	float *B = create_one_dim_float(900, "random");

	for (int a = 5; a < 350; a++)
	{
	  
	    B[a]=A[a][a][a];
	    A[a][a][a]=B[a]/A[a][a][a];
	  
	    B[a]=B[a+1]/0.825;
	  
	    float var_a=A[a][a][a]*0.746;
	    float var_b=A[a-1][a-5][a-5]-0.419;
	}

    return 0;
}