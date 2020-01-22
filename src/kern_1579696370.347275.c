#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(890, 370, "zeros");
	float *A = create_one_dim_float(290, "zeros");

	for (int a = 5; a < 886; a++)
	{
	  
	    B[a][a]=B[a][a-5]*0.258;
	  
	    B[a][a]=B[a+4][a]+0.902;
	  
	    A[a]=B[a][a]*A[a];
	    B[a][a]=B[a+2][a]/0.357;
	  
	    float var_a=B[a][a]+0.798;
	}

    return 0;
}