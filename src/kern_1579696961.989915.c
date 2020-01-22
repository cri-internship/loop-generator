#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "ones");
	float **A = create_two_dim_float(800, 150, "ones");

	for (int a = 4; a < 335; a++)
	{
	  
	    B[a]=B[a-4]+A[a][a];
	  
	    A[a][a]=A[a][a+3]/0.25;
	  
	    B[a]=B[a+2]/A[a][a];
	  
	    A[a][a]=A[a][a+4]*B[a];
	  
	    A[a][a]=B[a]*A[a][a];
	  
	    float var_a=A[a][a]/0.321;
	    float var_b=A[a-4][a]-0.508;
	}

    return 0;
}