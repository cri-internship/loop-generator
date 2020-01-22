#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(700, "ones");
	float **C = create_two_dim_float(650, 340, "ones");
	float *D = create_one_dim_float(100, "ones");
	float *A = create_one_dim_float(750, "ones");

	for (int a = 4; a < 95; a++)
	{
	  
	    B[a]=B[a-2]/0.017;
	  
	    D[a]=D[a-4]+C[a][a]-B[a];
	  
	    D[a]=D[a+5]*0.811;
	  
	    C[a][a]=C[a+1][a+3]/0.254;
	  
	    C[a][a]=C[a+3][a+2]+0.772;
	  
	    A[a]=D[a]*B[a]/D[a];
	    A[a+1]=B[a]/D[a]+0.316;
	  
	    B[a]=A[a];
	}

    return 0;
}