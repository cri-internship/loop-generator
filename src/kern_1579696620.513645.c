#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(810, "ones");
	float ***D = create_three_dim_float(820, 430, 340, "ones");
	float ***A = create_three_dim_float(640, 350, 640, "ones");
	float **C = create_two_dim_float(40, 990, "ones");
	float *B = create_one_dim_float(420, "ones");

	for (int a = 4; a < 40; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-4][a]-0.837;
	  
	    C[a][a]=C[a-1][a-2]+0.592;
	  
	    E[a]=E[a+5]/0.559;
	  
	    B[a]=B[a+4]*0.13;
	  
	    B[a]=C[a][a];
	  
	    C[a][a]=A[a][a][a]-D[a][a][a]+D[a][a][a];
	  
	    float var_a=D[a][a][a]+0.71;
	    float var_b=D[a+5][a+1][a+5]/0.914;
	}

    return 0;
}