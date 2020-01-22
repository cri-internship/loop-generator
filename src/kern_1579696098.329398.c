#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(160, "random");
	float **B = create_two_dim_float(150, 580, "random");
	float *D = create_one_dim_float(230, "random");
	float *C = create_one_dim_float(620, "random");

	for (int a = 0; a < 147; a++)
	{
	  
	    D[a]=D[a+5]*B[a][a]-A[a]/0.537;
	  
	    D[a]=D[a+4]*0.072;
	  
	    D[a]=D[a+2]/0.2;
	  
	    float var_a=B[a][a]/0.726;
	    float var_b=B[a+1][a+3]+0.749;
	  
	    C[a]=C[a]*0.048+B[a][a];
	    B[a][a]=C[a+4]-0.058;
	}

    return 0;
}