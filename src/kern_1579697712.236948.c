#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(430, 170, "ones");
	float **B = create_two_dim_float(960, 450, "ones");
	float **C = create_two_dim_float(150, 820, "ones");
	float *A = create_one_dim_float(30, "ones");

	for (int a = 3; a < 30; a++)
	{
	  
	    A[a]=A[a-3]/0.638;
	  
	    D[a][a]=D[a-2][a-1]-0.284;
	  
	    A[a]=B[a][a];
	  
	    C[a][a]=A[a]/A[a]-B[a][a];
	    C[a+5][a+2]=B[a][a]-0.224+A[a];
	  
	    float var_a=C[a][a]-0.821;
	    float var_b=C[a-2][a]*0.351;
	}

    return 0;
}