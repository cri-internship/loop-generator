#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(350, 50, "random");
	float *B = create_one_dim_float(960, "random");
	float **A = create_two_dim_float(650, 160, "random");
	float **D = create_two_dim_float(270, 940, "random");

	for (int a = 5; a < 267; a++)
	{
	  
	    C[a][a]=C[a][a-5]+0.904;
	  
	    C[a][a]=C[a][a+2]+0.101*A[a][a]-D[a][a];
	  
	    A[a][a]=0.631;
	    A[a-1][a-2]=0.885;
	  
	    B[a]=C[a][a];
	    B[a-3]=C[a][a]/A[a][a]*D[a][a];
	  
	    float var_a=D[a][a]-0.655;
	    float var_b=D[a+3][a]/0.743;
	}

    return 0;
}