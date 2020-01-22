#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(120, "ones");
	float *B = create_one_dim_float(510, "ones");
	float ***C = create_three_dim_float(720, 830, 110, "ones");
	float **A = create_two_dim_float(840, 480, "ones");
	float *D = create_one_dim_float(150, "ones");

	for (int a = 5; a < 147; a++)
	{
	  
	    D[a]=D[a-3]+A[a][a]*0.874;
	  
	    C[a][a][a]=C[a+2][a+1][a+1]+0.513;
	  
	    D[a]=D[a+3]*B[a]-C[a][a][a]/B[a];
	  
	    B[a]=D[a]-C[a][a][a]*E[a]/A[a][a];
	    B[a+2]=0.903;
	  
	    D[a]=C[a][a][a]/A[a][a]-D[a]*E[a];
	    E[a]=C[a-2][a-4][a]*E[a]/B[a]-D[a]+A[a][a];
	  
	    C[a][a][a]=D[a]-C[a][a][a]/B[a];
	    A[a][a]=D[a-5]+0.39;
	}

    return 0;
}