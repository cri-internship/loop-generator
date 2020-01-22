#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(60, "ones");
	float *C = create_one_dim_float(960, "ones");
	float **B = create_two_dim_float(940, 450, "ones");
	float *D = create_one_dim_float(540, "ones");
	float *A = create_one_dim_float(820, "ones");

	for (int a = 1; a < 55; a++)
	{
	  
	    C[a]=C[a-1]*D[a];
	  
	    B[a][a]=B[a+3][a]/A[a];
	  
	    E[a]=E[a+1]+0.384;
	  
	    E[a]=E[a+5]+0.803;
	  
	    C[a]=0.708;
	  
	    A[a]=E[a]-C[a]/B[a][a]+C[a]*A[a];
	    C[a]=E[a+4]/A[a]+D[a]-B[a][a];
	  
	    float var_a=A[a]*0.857;
	    float var_b=A[a+1]+0.07;
	}

    return 0;
}