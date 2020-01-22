#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(840, "random");
	float **B = create_two_dim_float(180, 520, "random");

	for (int a = 4; a < 178; a++)
	{
	  
	    B[a][a]=B[a-4][a]+0.019;
	  
	    B[a][a]=B[a+1][a+2]-A[a];
	  
	    A[a]=A[a]*B[a][a];
	    B[a][a]=A[a+4]/0.298;
	  
	    B[a][a]=B[a][a]/A[a];
	    A[a]=B[a-4][a-3]-A[a];
	  
	    float var_a=A[a]/0.981;
	    float var_b=A[a-1]+0.242;
	}

    return 0;
}