#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(500, "random");
	float **B = create_two_dim_float(110, 980, "random");
	float **C = create_two_dim_float(700, 80, "random");
	float *A = create_one_dim_float(700, "random");

	for (int a = 4; a < 105; a++)
	{
	  
	    B[a][a]=B[a-4][a]*0.146;
	  
	    B[a][a]=B[a+5][a+1]/0.29;
	  
	    B[a][a]=B[a+3][a]+0.918;
	  
	    A[a]=0.452+B[a][a];
	    A[a+5]=D[a];
	  
	    D[a]=0.528;
	    D[a+2]=A[a];
	  
	    float var_a=B[a][a]+0.116;
	}

    return 0;
}