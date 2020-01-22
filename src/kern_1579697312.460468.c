#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(520, "ones");
	float **A = create_two_dim_float(190, 430, "ones");
	float **E = create_two_dim_float(10, 780, "ones");
	float *B = create_one_dim_float(900, "ones");
	float ***C = create_three_dim_float(460, 410, 140, "ones");

	for (int a = 5; a < 457; a++)
	{
	  
	    B[a]=B[a-1]-0.858;
	  
	    D[a]=D[a+4]-C[a][a][a];
	  
	    D[a]=A[a][a]+B[a]/0.31-C[a][a][a];
	  
	    E[a][a]=C[a][a][a]+D[a]-D[a];
	    A[a][a]=C[a+1][a+3][a]+E[a][a]/A[a][a]-B[a]*D[a];
	  
	    float var_a=D[a]-0.223;
	    float var_b=D[a-5]-0.169;
	}

    return 0;
}