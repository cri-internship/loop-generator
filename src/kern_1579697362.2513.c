#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(90, "random");
	float ***C = create_three_dim_float(850, 720, 470, "random");
	float *B = create_one_dim_float(530, "random");

	for (int a = 4; a < 90; a++)
	{
	  
	    B[a]=B[a-4]-C[a][a][a];
	  
	    C[a][a][a]=A[a]+B[a];
	    A[a]=C[a][a][a];
	  
	    float var_a=B[a]*0.637;
	    B[a]=0.05;
	  
	    C[a][a][a]=0.019;
	}

    return 0;
}