#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(840, 950, "zeros");
	float *B = create_one_dim_float(890, "zeros");

	for (int a = 5; a < 836; a++)
	{
	  
	    B[a]=B[a-2]+0.793;
	  
	    B[a]=B[a+3]/A[a][a];
	  
	    B[a]=B[a+2]/A[a][a];
	  
	    B[a]=B[a+4]+A[a][a];
	  
	    float var_a=A[a][a]-0.56;
	    float var_b=A[a+4][a+2]*0.494;
	}

    return 0;
}