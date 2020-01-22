#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(110, 810, "ones");
	float ***C = create_three_dim_float(130, 840, 1000, "ones");
	float ***D = create_three_dim_float(620, 910, 990, "ones");
	float **B = create_two_dim_float(740, 840, "ones");
	float **A = create_two_dim_float(80, 160, "ones");

	for (int a = 5; a < 77; a++)
	{
	  
	    A[a][a]=A[a-1][a-5]+0.573;
	  
	    B[a][a]=B[a-1][a-1]-0.655;
	  
	    E[a][a]=E[a+3][a+2]*A[a][a];
	  
	    float var_a=A[a][a]-0.292;
	    float var_b=A[a-2][a-2]*0.987;
	  
	    C[a][a][a]=A[a][a]*B[a][a];
	    A[a][a]=A[a+1][a+3]+C[a][a][a]*D[a][a][a]-C[a][a][a];
	}

    return 0;
}